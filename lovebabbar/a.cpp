#include <iostream>
using namespace std;


int main(){
    uint32_t n;
    int val=0;
    cin>> n;
    while(n!=0){
        if(n&1)
        {
            val++;
        }
        n=n>>1;
    }
    cout<<val<<endl;
    return 0;     
}