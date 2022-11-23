#include <stdio.h>

void display(int arr[],int size){
    printf("\n");
    for(int i=0;i<size;i++){
        printf("%d ",arr[i]);
    }
    printf("\n");
}

void arrDeletion(int arr[], int *size, int index){
    if(index>=*size)
    printf("Failed to delete. Index out of bounds.");
    else
    {
        int val=arr[index];
        for(int i=index;i<*size-1;i++)//size-1 because i traverse to size-2 , since size-1 is general case, but when I delete, one more size decrease, so size-2
        {
            arr[i]=arr[i+1];
        }
        *size=*size-1;
        printf("%d deleted successfully.",val);
    }
}
int main(){
    int arr[]={3,4,6,22,334,34};
    int index,*size;
    *size=sizeof(arr)/sizeof(int);
    display(arr,*size);
    printf("Enter the index of the element to be deleted\n");
    scanf("%d",&index);
    arrDeletion(arr,size,index);
    display(arr,*size);
    return 0;
}