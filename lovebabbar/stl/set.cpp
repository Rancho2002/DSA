#include <iostream>
#include <set>

using namespace std;

int main(){
    set<int>s; // it can sort element in log n time(BST)
    s.insert(5);
    s.insert(5);
    s.insert(3);
    s.insert(3);
    s.insert(4);
    s.insert(1);
    s.insert(1);

    for(auto i: s)
    cout<<i<<" ";
    cout<<endl;


    set<int>::iterator it=s.begin();
    it++;

    s.erase(it); // s.begin() is iterator
    for(auto i: s)
    cout<<i<<" ";
    cout<<endl;


    cout<<"5 present or not "<<s.count(4)<<endl;
    set<int>::iterator itr=s.find(4);//! return the iterator of 5
    cout<<"Value present at itr "<<*itr<<endl;

    for(auto it=itr;it!=s.end();it++){
        cout<<*it<<" ";
    }cout<<endl;
    return 0;
}
