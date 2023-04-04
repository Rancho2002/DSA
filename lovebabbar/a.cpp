#include <iostream>
using namespace std;

void traversal(int n,int **arr){
    int i=0;
    int j=0;
    for(i=0;i<n;i++){
        for(j=0;j<n;j++){
            printf("%d ",arr[i][j]);
        }
        printf("\n");
    }
} 


int main(){
    uint32_t n;
    int **arr={{1,2,3},{4,5,6},{7,8,9}};
    traversal(3,arr);
    return 0;     
}

#include <stdio.h>
const int N = 3;
 
void print(int arr[][N], int m)
{
    int i, j;
    for (i = 0; i < m; i++)
      for (j = 0; j < N; j++)
        printf("%d ", arr[i][j]);
}
 
int main()
{
    int arr[][3] = {{1, 2, 3}, {4, 5, 6}, {7, 8, 9}};
    print(arr, 3);
    return 0;
}