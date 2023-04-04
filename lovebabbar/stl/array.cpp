#include <iostream>
#include <array>

using namespace std;

int main(){
    int basic[3]={1,2,3};
    array<int,3> arr={1,2,3};// static array
    int size=arr.size();
    for(int i=0;i<size;i++){
        cout<<arr[i]<<endl;
    }

    cout<<"Element at index 2 is "<<arr.at(2)<<endl;

    cout<<"Empty or not: "<<arr.empty()<<endl;

    cout<<"Front elem "<<arr.front()<<" back element "<<arr.back()<<endl;
}