#include <iostream>
#include <vector>
using namespace std;

int main(){
    //! initialize with same value
    vector<int> a(5,2);
    for(int i:a)
    cout<<i<<" ";
    cout<<endl;
    //! copying a vector
    vector<int> last(a);
    for(int i:last)
    cout<<i<<" ";
    cout<<endl;
    return 0;
}