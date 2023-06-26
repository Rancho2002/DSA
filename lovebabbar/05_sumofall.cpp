#include <iostream>

using namespace std;

int sum(int arr[],int size){
    int ans=0;
    for(int i=0;i<size;i++){
        ans+=arr[i];
    }
    return ans;
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
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";

    cout<<endl<<"Sum of the array is: "<<sum(arr,n)<<endl;

}