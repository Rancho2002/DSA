#include <iostream>
#include <queue>
using namespace std;

int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(3);
    cout<<"front element "<<q.front()<<endl;
    q.pop();
    cout<<"front element after pop "<<q.front()<<endl;
    q.pop();
    cout<<q.size()<<endl;
    q.pop();
    cout<<"Check empyty "<<q.empty()<<endl;
    return 0;
}