#include <iostream>
#include <list>
using namespace std;

int main(){
    list<int> l(5,100);
    for(int i:l)
    cout<<i<<" ";
    cout<<endl;
    l.erase(l.end());
    for(int i:l)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}