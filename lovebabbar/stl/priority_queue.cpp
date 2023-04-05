#include <iostream>
#include <queue>
using namespace std;

int main(){

    // using max heap
    priority_queue<int> maxi;

    maxi.push(4);
    maxi.push(5);
    maxi.push(3);
    maxi.push(2);
    cout<<maxi.top()<<endl; //! sob somoi 5 asbe, max element
    maxi.pop();
    cout<<maxi.top()<<endl; //! sob somoi 5 asbe, max element
    int size=maxi.size();
    for(int i=0;i<size;i++){
        cout<<maxi.top()<<" ";
        maxi.pop();
    }cout<<endl;

    //using min heap
    priority_queue<int,vector<int>,greater<int>>mini;

    mini.push(4);
    mini.push(3);
    mini.push(5);
    mini.push(0);
    mini.push(1);
    cout<<mini.top()<<endl;// ! sob somoi 0 asbe, min element
    return 0;
}