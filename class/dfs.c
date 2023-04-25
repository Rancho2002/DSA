#include <stdio.h>
#include <stdlib.h>

#define WHITE 0
#define GRAY 1
#define BLACK 2

struct node {
    int data;
    struct node* next;
};

struct graph {
    int V;  // number of vertices
    struct node** adjList;
};

void addEdge(struct graph* G, int u, int v) {
    struct node* newNode = (struct node*) malloc(sizeof(struct node));
    newNode->data = v;
    newNode->next = G->adjList[u];
    G->adjList[u] = newNode;
}

void DFS_visit(struct graph* G, int u, int* color, int* start, int* finish, int* time) {
    color[u] = GRAY;
    start[u] = ++(*time);
    struct node* v;
    for (v = G->adjList[u]; v != NULL; v = v->next) {
        if (color[v->data] == WHITE) {
            DFS_visit(G, v->data, color, start, finish, time);
        }
    }
    color[u] = BLACK;
    finish[u] = ++(*time);
}

void DFS(struct graph* G, int* color, int* start, int* finish) {
    int time = 0;
    int i;
    for (i = 0; i < G->V; i++) {
        if (color[i] == WHITE) {
            DFS_visit(G, i, color, start, finish, &time);
        }
    }
}

int main() {
    int n, m;
    printf("Enter number of vertices and edges: ");
    scanf("%d %d", &n, &m);

    struct graph* G = (struct graph*) malloc(sizeof(struct graph));
    G->V = n;
    G->adjList = (struct node**) malloc(n * sizeof(struct node*));
    int i;
    for (i = 0; i < n; i++) {
        G->adjList[i] = NULL;
    }

    int u, v;
    printf("Enter edges (u, v): ");
    for (i = 0; i < m; i++) {
        scanf("%d %d", &u, &v);
        addEdge(G, u, v);
    }

    int* color = (int*) malloc(n * sizeof(int));
    int* start = (int*) malloc(n * sizeof(int));
    int* finish = (int*) malloc(n * sizeof(int));

    for (i = 0; i < n; i++) {
        color[i] = WHITE;
    }

    DFS(G, color, start, finish);

    for (i = 0; i < n; i++) {
        printf("Node %d: start time = %d, finish time = %d\n", i, start[i], finish[i]);
    }

    for (i = 0; i < n; i++) {
        struct node* temp = G->adjList[i];
        while (temp != NULL) {
            struct node* toFree = temp;
            temp = temp->next;
            free(toFree);
        }
    }
    free(G->adjList);
    free(G);
    free(color);
    free(start);
    free(finish);

    return 0;
}
