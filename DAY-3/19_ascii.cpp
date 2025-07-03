#include<iostream>
using namespace std;

int main(){
    pair<char,int> p[256];
    for(int i=0;i<256;i++){
        p[i].first=i+63;
        p[i].second=i+63;

    }
    for(int i=0;i<256;i++){
        cout<<p[i].first;
        cout<<" ";
        cout<<p[i].second;
        cout<<endl;

    }
    return 0;
}