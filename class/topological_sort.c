#include <stdio.h>
#include <stdlib.h>

#define MAX_VERTICES 100

// Structure to represent a directed graph
struct Graph {
    int numVertices;
    int adjacencyMatrix[MAX_VERTICES][MAX_VERTICES];
};

// Function to initialize a graph
void initGraph(struct Graph* graph, int numVertices) {
    graph->numVertices = numVertices;

    // Initialize the adjacency matrix with all zeros
    for (int i = 0; i < numVertices; i++) {
        for (int j = 0; j < numVertices; j++) {
            graph->adjacencyMatrix[i][j] = 0;
        }
    }
}

// Function to add an edge to the graph
void addEdge(struct Graph* graph, int src, int dest) {
    // Add edge from source to destination
    graph->adjacencyMatrix[src][dest] = 1;
}

// Function to perform topological sort
void topologicalSortUtil(struct Graph* graph, int vertex, int visited[], int stack[]) {
    visited[vertex] = 1;

    // Recursively process all the adjacent vertices
    for (int i = 0; i < graph->numVertices; i++) {
        if (graph->adjacencyMatrix[vertex][i] && !visited[i]) {
            topologicalSortUtil(graph, i, visited, stack);
        }
    }

    // Push the current vertex onto the stack
    stack[vertex] = 1;
}

void topologicalSort(struct Graph* graph) {
    int visited[MAX_VERTICES] = {0};  // Array to keep track of visited vertices
    int stack[MAX_VERTICES] = {0};    // Stack to store the topological order

    for (int i = 0; i < graph->numVertices; i++) {
        if (!visited[i]) {
            topologicalSortUtil(graph, i, visited, stack);
        }
    }

    // Print the topological order
    printf("Topological Order: ");
    for (int i = graph->numVertices - 1; i >= 0; i--) {
        printf("%d ", stack[i]);
    }
}

int main() {
    struct Graph graph;
    int numVertices, numEdges;

    printf("Enter the number of vertices in the graph: ");
    scanf("%d", &numVertices);

    initGraph(&graph, numVertices);

    printf("Enter the number of edges in the graph: ");
    scanf("%d", &numEdges);

    printf("Enter the edges in the graph (source destination):\n");
    for (int i = 0; i < numEdges; i++) {
        int src, dest;
        scanf("%d %d", &src, &dest);
        addEdge(&graph, src, dest);
    }

    topologicalSort(&graph);

    return 0;
}
