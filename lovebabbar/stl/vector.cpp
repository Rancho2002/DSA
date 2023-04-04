// #include <iostream>
// #include <vector>
// using namespace std;

// int main()
// {
//     vector<int> v;
//     cout << "Size " << v.size() << " Capacity " << v.capacity() << endl;
//     v.push_back(4);
//     cout << "Size " << v.size() << " Capacity " << v.capacity() << endl;
//     v.push_back(2);
//     cout << "Size " << v.size() << " Capacity " << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Size " << v.size() << " Capacity " << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Size " << v.size() << " Capacity " << v.capacity() << endl;
//     v.push_back(3);
//     cout << "Size " << v.size() << " Capacity " << v.capacity() << endl;//! capacity multiplied by 2 all the time


//     for(int i:v){
//         cout<<i<<endl;
//     }
//     v.pop_back();
//     cout<<"After pop_back"<<endl;
//     for(int i:v){
//         cout<<i<<endl;
//     }
//     return 0;
// }


#include <iostream>
#include <vector>
using namespace std;


int main(){
    vector<int> v;
    v.push_back(1);
    v.push_back(2);
    for(int i:v){
        cout<<i<<" ";
    }
    v.clear();
    cout<<endl<<v.size()<<endl;
    return 0;
}