#include <stdio.h>

int linearSearch(int arr[], int size, int elem)
{
    for (int i = 0; i < size; i++)
    {
        if (arr[i] == elem)
            return i;
    }
    return -1;
}

int binarySearch(int arr[], int size, int elem)
{
    int low, mid, high;
    low = 0;
    high = size - 1;
    while (low <= high)
    {
        mid = (low + high) / 2;
        if (arr[low] == elem)
            return low;
        if (arr[high] == elem)
            return high;
        if (arr[mid] == elem)
            return mid;
        if (arr[mid] < low)
            low = mid + 1;
        else
            high = mid - 1;
    }
    return -1;
}
int main()
{
    // int arr[] = {23, 12, 34, 59, 32, 10};
    int arr[]={1,2,3,4,5,6};
    int size = sizeof(arr) / sizeof(int);
    int element = 6;
    // int index = linearSearch(arr, size, element);
    int index= binarySearch(arr,size,element);
    if (index == -1)
    {
        printf("Not present in the array.");
        return -1;
    }
    printf("%d present at %d index position", element, index);
    return 0;
}