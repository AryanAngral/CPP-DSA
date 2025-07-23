#include <iostream>
#include<unordered_map>

using namespace std;

int main() {
    
    unordered_map< string, int > mp;

    mp["Aryan"] = 5;
    mp["Sury"] = 2;
    mp["Akshit"] =9 ;

    mp.insert({"Arya",1});

    for(auto x: mp){
        cout<<x.first<<", "<<x.second<<"\n";
    }

    return 0;
}