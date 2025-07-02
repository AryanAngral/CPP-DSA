#include<bits/stdc++.h>
using namespace std;
int main(){

    vector <int> v = {23, 10, 24, 78, 89, 45};

    for(auto x:v){
        cout<<x<<" ";
    }

    sort(v.begin(),v.end()); // sort is in library called algorithms
    //begin and end gives the reference of the 0 and one past last adrres of the contents of the variable.

    cout<<v.front()<<endl;
    cout<<v.back()<<endl;

    cout<< *v.begin()<<endl;
    cout<< *(v.end()-1)<<endl;


    return 0;

}