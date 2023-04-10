#include <iostream>
#include <map>  
using namespace std;

int main(){
    map<int,string>m;
    m[1]="arijit";
    m[5]="avik";
    m[3]="niloy";

    m.insert({2,"ratan"});

    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;
    

    m.erase(5);
    cout<<"after erase"<<endl;

    for(auto i:m)
    cout<<i.first<<" "<<i.second<<endl;

    cout<<"using iterator"<<endl;
    auto it=m.find(2);
    for(auto i=it;i!=m.end();i++)
    cout<<(*i).first<<" "<<(*i).second<<endl;

    return 0;
}