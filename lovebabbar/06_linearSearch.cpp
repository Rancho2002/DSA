#include <iostream>

using namespace std;

bool linear(int arr[],int size, int key){
    for(int i=0;i<size;i++)
        if(arr[i]==key) return true;
    return false;

}

int main(){
    int n,arr[100],key;
    cout<<"Enter array length: "<<endl;
    cin>>n;
    for(int i=0;i<n;i++){
        cout<<"Enter element "<<i+1<<": ";
        cin>>arr[i];
    }
    cout<<"Elements in the array are: "<<endl;
    for(int i=0;i<n;i++)
    cout<<arr[i]<<" ";
    cout<<endl<<"Enter the element to search: "<<endl;
    cin>>key;
    bool flag=linear(arr,n,key);
    if(flag) cout<<"Item present."<<endl;
    else cout<<"Item not present."<<endl;
}