#include <stdio.h>

void selection(int arr[], int size){
    int i,min,temp;
    for(int i=0;i<size-1;i++)
    {
        min= i;// find the minimum element index first
        for(int j=0;j<size;j++){
            if(arr[j]<arr[min]){
                min=j;
            }
        }
        temp=arr[min];
        arr[min]=arr[i];
        arr[i]=temp;
    }
}

int main(){
    int arr[]={4,2,9,1,5};
    selection(arr,5);
     for (int i = 0; i < 5; i++)
    {
        printf("%d ",arr[i]);
    }
    return 0;
}