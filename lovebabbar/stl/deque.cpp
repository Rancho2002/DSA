#include <iostream>
#include <deque>
using namespace std;

int main(){
    deque<int>d;

    d.push_back(4);
    d.push_front(1);
    for(int i:d)
    cout<<i<<" ";
    cout<<endl;

    // d.pop_back();
    // d.pop_front();
    // for(int i:d)
    // cout<<i<<" ";
    // cout<<endl;

    cout<<"Element at 1st index "<<d.at(0)<<endl;
    cout<<"Front "<<d.front()<<" back "<<d.back()<<endl;

    cout<<"Check empty "<<d.empty()<<endl;
    cout<<"size before Erasing "<<d.size()<<endl;
    d.erase(d.begin(),d.begin()+1);
    cout<<"size after Erasing "<<d.size()<<endl;
    return 0;
}