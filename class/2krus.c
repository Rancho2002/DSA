#include <stdio.h>
int a, b, u, v, n, i, j, ne = 1;
int visited[10] = {0}, min, mincost = 0, cost[10][10], parent[10];
int find(int i){
    while(parent[i])
        i = parent[i];
    return i;
}
int uni(int i, int j){
    if(i != j){
        parent[j] = i;
        return 1;
    }
    return 0;
}
void main(){
    printf("\nImplementation of Kruskal's algorithm\n");
    printf("\nEnter the number of vertices:");
    scanf("%d", &n);
    printf("\nEnter the cost adjacency matrix:\n");
    for(i = 1; i <= n; i++)
        for(j = 1; j <= n; j++){
            scanf("%d", &cost[i][j]);
            if(cost[i][j] == 0)
                cost[i][j] = 999;
        }
    printf("\nThe edges of Minimum Cost Spanning Tree are\n");
    while(ne < n){
        for(i = 1, min = 999; i <= n; i++)
            for(j = 1; j <= n; j++)
                if(cost[i][j] < min){
                    min = cost[i][j];
                    a = u = i;
                    b = v = j;
                }
        u = find(u);
        v = find(v);
        if(uni(u, v)){
            printf("\n%d edge (%d,%d) = %d", ne++, a-1, b-1, min);
            mincost += min;
        }
        cost[a][b] = cost[b][a] = 999;
    }
    printf("\n\tMinimum cost = %d \n", mincost);
}