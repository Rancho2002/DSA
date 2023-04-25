#include <stdio.h>
#include <stdlib.h>

#define MAX_EDGES 100000

typedef struct edge {
    int u, v, weight;
} edge;

typedef struct graph {
    int num_vertices, num_edges;
    edge edges[MAX_EDGES];
} graph;

typedef struct subset {
    int parent, rank;
} subset;

int find(subset subsets[], int i) {
    if (subsets[i].parent != i)
        subsets[i].parent = find(subsets, subsets[i].parent);
    return subsets[i].parent;
}

void union_sets(subset subsets[], int x, int y) {
    int xroot = find(subsets, x);
    int yroot = find(subsets, y);

    if (subsets[xroot].rank < subsets[yroot].rank)
        subsets[xroot].parent = yroot;
    else if (subsets[xroot].rank > subsets[yroot].rank)
        subsets[yroot].parent = xroot;
    else {
        subsets[yroot].parent = xroot;
        subsets[xroot].rank++;
    }
}

int compare_edges(const void* a, const void* b) {
    edge* edge1 = (edge*)a;
    edge* edge2 = (edge*)b;
    return edge1->weight - edge2->weight;
}

void kruskal_mst(graph* g) {
    int i, u, v;
    subset* subsets = (subset*)malloc(sizeof(subset) * g->num_vertices);
    edge result[g->num_vertices];
    int e = 0;
    int idx = 0;

    for (i = 0; i < g->num_vertices; i++) {
        subsets[i].parent = i;
        subsets[i].rank = 0;
    }

    qsort(g->edges, g->num_edges, sizeof(edge), compare_edges);

    while (e < g->num_vertices - 1 && idx < g->num_edges) {
        edge next_edge = g->edges[idx++];

        u = find(subsets, next_edge.u);
        v = find(subsets, next_edge.v);

        if (u != v) {
            result[e++] = next_edge;
            union_sets(subsets, u, v);
        }
    }

    printf("Edges in the MST:\n");
    for (i = 0; i < e; i++)
        printf("(%d, %d) weight=%d\n", result[i].u, result[i].v, result[i].weight);

    free(subsets);
}

int main() {
    graph g = { 4, 5, {{0, 1, 10}, {0, 2, 6}, {0, 3, 5}, {1, 3, 15}, {2, 3, 4}} };
    kruskal_mst(&g);
    return 0;
}