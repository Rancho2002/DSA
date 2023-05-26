#include <stdio.h>
#include <stdbool.h>

#define MAX_VERTICES 100 // Maximum number of vertices

typedef struct {
    int nVertices;
    int adjMatrix[MAX_VERTICES][MAX_VERTICES];
} Graph;

void initGraph(Graph *graph, int nVertices) {
    graph->nVertices = nVertices;

    for (int i = 0; i < nVertices; i++) {
        for (int j = 0; j < nVertices; j++) {
            graph->adjMatrix[i][j] = 0;
        }
    }
}

void addEdge(Graph *graph, int v1, int v2) {
    graph->adjMatrix[v1][v2] = 1;
    graph->adjMatrix[v2][v1] = 1;
}

bool containEdge(Graph *graph, int v1, int v2) {
    return graph->adjMatrix[v1][v2] > 0 && graph->adjMatrix[v2][v1] > 0;
}

void removeEdge(Graph *graph, int v1, int v2) {
    if (containEdge(graph, v1, v2)) {
        graph->adjMatrix[v1][v2] = 0;
        graph->adjMatrix[v2][v1] = 0;
    }
}

void printGraph(Graph *graph) {
    for (int i = 0; i < graph->nVertices; i++) {
        for (int j = 0; j < graph->nVertices; j++) {
            printf("%d ", graph->adjMatrix[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int nVertices = 5;
    Graph graph;
    initGraph(&graph, nVertices);

    addEdge(&graph, 0, 1);
    addEdge(&graph, 1, 2);
    addEdge(&graph, 2, 3);
    addEdge(&graph, 3, 4);
    addEdge(&graph, 4, 0);

    printGraph(&graph);

    return 0;
}
