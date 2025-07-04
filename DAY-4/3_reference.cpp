#include<iostream>
using namespace std;

int main(){
    int a = 5;
    // int &r; --Error
    int &r = a;

    r = 7;
    cout <<"r"<<r <<"a"<<a;

    return 0;
}
