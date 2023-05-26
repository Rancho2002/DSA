#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

#define MAX_NODES 1000

// Define colors to mark visited nodes
#define WHITE 0 // Node has not been visited
#define GRAY 1  // Node is currently being explored
#define BLACK 2 // Node has been fully explored

int n;                         // number of nodes in the graph
int adj[MAX_NODES][MAX_NODES]; // adjacency matrix
int color[MAX_NODES];          // color of each node
int dist[MAX_NODES];           // distance of each node from the source
int parent[MAX_NODES];         // parent of each node in the BFS tree

// Define a deque
typedef struct deque
{
    int data[MAX_NODES];
    int front;
    int rear;
} deque;

void init(deque *q)
{
    q->front = -1;
    q->rear = -1;
}

bool is_empty(deque *q)
{
    return (q->front == -1 && q->rear == -1);
}

bool is_full(deque *q)
{
    return (q->rear == MAX_NODES - 1);
}

void enqueue_front(deque *q, int x)
{
    if (is_full(q))
    {
        printf("Queue is full\n");
        return;
    }
    if (is_empty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else if (q->front == 0)
    {
        q->front = MAX_NODES - 1;
    }
    else
    {
        q->front--;
    }
    q->data[q->front] = x;
}

void enqueue_rear(deque *q, int x)
{
    if (is_full(q))
    {
        printf("Queue is full\n");
        return;
    }
    if (is_empty(q))
    {
        q->front = 0;
        q->rear = 0;
    }
    else if (q->rear == MAX_NODES - 1)
    {
        q->rear = 0;
    }
    else
    {
        q->rear++;
    }
    q->data[q->rear] = x;
}

int dequeue_front(deque *q)
{
    if (is_empty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    int x = q->data[q->front];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else if (q->front == MAX_NODES - 1)
    {
        q->front = 0;
    }
    else
    {
        q->front++;
    }
    return x;
}

int dequeue_rear(deque *q)
{
    if (is_empty(q))
    {
        printf("Queue is empty\n");
        return -1;
    }
    int x = q->data[q->rear];
    if (q->front == q->rear)
    {
        q->front = -1;
        q->rear = -1;
    }
    else if (q->rear == 0)
    {
        q->rear = MAX_NODES - 1;
    }
    else
    {
        q->rear--;
    }
    return x;
}

void bfs(int s)
{
    int i, u, v;
    deque q;
    init(&q);
    for (i = 0; i < n; i++)
    {
        color[i] = WHITE;
        dist[i] = -1;
        parent[i] = -1;
    }
    color[s] = GRAY;
    dist[s] = 0;
    parent[s] = -1;
    enqueue_rear(&q, s);
    while (!is_empty(&q))
    {
        u = dequeue_front(&q);
        for (v = 0; v < n; v++)
        {
            if (adj[u][v] == 1)
            {
                if (color[v] == WHITE)
                {
                    color[v] = GRAY;
                    dist[v] = dist[u] + 1;
                    parent[v] = u;
                    enqueue_rear(&q, v);
                }
            }
        }
        color[u] = BLACK;
    }
}
int main()
{
    int i, j, s;
    printf("Enter number of nodes in the graph: ");
    scanf("%d", &n);
    printf("Enter adjacency matrix:\n");
    for (i = 0; i < n; i++)
    {
        for (j = 0; j < n; j++)
        {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Enter source node: ");
    scanf("%d", &s);
    bfs(s);
    printf("Distance from source node %d:\n", s);
    for (i = 0; i < n; i++)
    {
        printf("%d: %d\n", i, dist[i]);
    }
    return 0;
}