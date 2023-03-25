#include <stdio.h>

void bubble(int arr[], int size)
{
    int i, temp, swaped = 1, pass;
    for (pass = 0; pass < size-1 && swaped; pass++) //counting the each pass and checking whether sorted or not
    {
        swaped = 0;
        for(i = 0 ; i< size-pass-1 ; i++) 
        {
            if(arr[i]>arr[i+1]) // checking two elements and swapping if need
            {
            temp = arr[i];
            arr[i] = arr[i + 1];
            arr[i + 1] = temp;
            swaped = 1;
            }
        }
    }
}

int main()
{
    // int arr[]={4,2,9,1,5};
    int size;
    scanf("%d",&size);
    int arr[size];
    for(int i=0;i<size;i++){
        scanf("%d",&arr[i]);
    }
    bubble(arr,size);
    for (int i = 0; i < size; i++)
    {
        printf("%d ",arr[i]);
    }
    
    return 0;
}