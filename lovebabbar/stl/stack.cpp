#include <iostream>
#include <stack>
using namespace std;

int main(){
    stack<int> s;
    s.push(4);
    s.push(5);
    cout<<"Top Value "<<s.top()<<endl;
    s.pop();
    cout<<"Top Value "<<s.top()<<endl;
    cout<<"Checking Size "<<s.size()<<endl;
    cout<<"Checking empty "<<s.empty()<<endl;
    
    return 0;
}