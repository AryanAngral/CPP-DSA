#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

int main(){

    vector <int> v = {10, 20, 30 ,40, 50}; //static allocation

    vector <int> *v1 = new vector<int>; // dynamic alocation

    // int x;
    // cin>>x;
    
    v1->push_back(10);
    (*v1).push_back(20);


    v1->resize(4); // use to reallocate memory bolck dynamically.


    (*v1)[2]=6;

    
    for (auto x:*v1){
        cout<<x<<" ";
    }
    
    return 0;
}