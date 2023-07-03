// Heap Sort in C

#include <stdio.h>
#include <stdlib.h>

void swap(int* a, int* b)
{

	int temp = *a;

	*a = *b;

	*b = temp;
}

void max_heapify(int arr[], int N, int i)
{
	
	int largest = i;

	int left = 2 * i ;

	int right = 2 * i + 1;

	if (left < N && arr[left] > arr[largest])

		largest = left;


	if (right < N && arr[right] > arr[largest])

		largest = right;

	if (largest != i) {

		swap(&arr[i], &arr[largest]);

		max_heapify(arr, N, largest);
	}
}

void build_max_heap(int arr[],int N){
	int i;
	for(int i=N/2;i>=0;i--){
		max_heapify(arr,N,i);
	}
}


void heapSort(int arr[], int N)
{
	build_max_heap(arr,N);
	
	for (int i = N-1; i >= 0; i--) {

		swap(&arr[0], &arr[i]);

		max_heapify(arr, i, 0);
	}
}

void printArray(int arr[], int N)
{
	for (int i = 0; i < N; i++)
		printf("%d ", arr[i]);
	printf("\n");
}

int main()
{
	int n,a[1000],k,upper,lower;
	upper=1000;lower= -100;
	printf("Enter how many numbers: ");
	scanf("%d",&n);
	printf("\nThe random numbers are:\n");
	for(k=0;k<n;k++){
		a[k]=(rand()%(upper-lower+1))+lower;
		printf("%d ",a[k]);
	}

	heapSort(a, n);
	printf("\nSorted array is:\n");
	printArray(a, n);
}
