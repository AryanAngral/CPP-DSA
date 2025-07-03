#include<iostream>
#include<vector>

using namespace std;
int main(){

    pair <char, int> p[6];
    
    p[0].first='A';
    p[0].second=1;
    
    p[1].first='B';
    p[1].second=2;

    p[3].first='c';
    p[3].second=3;
    
    p[4].first='D';
    p[4].second=4;
    
    p[5].first='E';
    p[5].second=5;
    
    cout<< p[0].first;
    cout<< p[0].second;
    
    cout<< p[1].first;
    cout<< p[1].second;
    
    cout<< p[2].first;
    cout<< p[2].second;

    cout<< p[3].first;
    cout<< p[3].second;
    
    cout<< p[4].first;
    cout<< p[4].second;
    
    cout<< p[5].first;
    cout<< p[5].second;


    return 0;
}