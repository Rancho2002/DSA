#include <iostream>

using namespace std;

void reverse(int arr[],int size){
    for(int i=0;i<size/2;i++){
        arr[i]=arr[size-i-1]^arr[i];
        arr[size-i-1]=arr[i]^arr[size-i-1];
        arr[i]=arr[size-i-1]^arr[i];
        // swap(arr[i],arr[size-i-1]);
    }
}

int main(){
    int arr[5]={1,3,4,6,7};
    reverse(arr,5);
    cout<<"Elements in the array are: "<<endl;
    for(int i=0;i<5;i++)
    cout<<arr[i]<<" ";
    cout<<endl;
    return 0;
}