#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>
#include <iostream>
#include <deque>

#define MAX_NODES 1000

// Define colors to mark visited nodes
#define WHITE 0  // Node has not been visited
#define GRAY 1  // Node is currently being explored
#define BLACK 2  // Node has been fully explored

int n;  // number of nodes in the graph
int adj[MAX_NODES][MAX_NODES];  // adjacency matrix
int color[MAX_NODES];  // color of each node
int dist[MAX_NODES];  // distance of each node from the source
int parent[MAX_NODES];  // parent of each node in the BFS tree

void bfs(int s) {
    int i, u, v;
    deque<int> q;
    for (i = 0; i < n; i++) {
        color[i] = WHITE;
        dist[i] = -1;
        parent[i] = -1;
    }
    color[s] = GRAY;
    dist[s] = 0;
    parent[s] = -1;
    q.push_back(s);
    while (!q.empty()) {
        u = q.front();
        q.pop_front();
        for (v = 0; v < n; v++) {
            if (adj[u][v] && color[v] == WHITE) {
                color[v] = GRAY;
                dist[v] = dist[u] + 1;
                parent[v] = u;
                q.push_back(v);
            }
        }
        color[u] = BLACK;
    }
}

int main() {
    int i, j, s;
    printf("Enter the number of nodes: ");
    scanf("%d", &n);
    printf("Enter the adjacency matrix:\n");
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            scanf("%d", &adj[i][j]);
        }
    }
    printf("Enter the source node: ");
    scanf("%d", &s);
    bfs(s);
    printf("The BFS tree rooted at node %d is:\n", s);
    for (i = 0; i < n; i++) {
        if (parent[i] == -1) {
            printf("%d is the root\n", i);
        } else {
            printf("%d is the child of %d\n", i, parent[i]);
        }
    }
    return 0;
}
