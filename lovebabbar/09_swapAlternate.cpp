#include <iostream>

using namespace std;

void swapAlternate(int arr[],int size){
    for(int i=0;i<size-1;i+=2){
        // swap(arr[i],arr[i+1]);
        int temp=arr[i+1];
        arr[i+1]=arr[i];
        arr[i]=temp;
        
    }
}

int main(){
    int n,arr[100];
    cout<<"Enter array length: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Elements in the array are: "<<endl;
    for(int i=0;i<n;i++) cout<<arr[i]<<" ";
    cout<<endl;
    swapAlternate(arr,n);
    cout<<"Elements in the array are: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}