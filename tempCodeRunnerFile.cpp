#include<iostream>
using namespace std;

int num=10;

int main(){

    int num = 20; // it creates a variable num and store the value 20
    int *ptr = &num; // storw the address of num in a ponter ptr
    int &x = num;

    cout << num << endl; //20
    cout << *ptr << endl; //20
    //cout << **(&num) << endl; // error
    cout << **(&ptr) << endl; // 20
    cout << *(&num) << endl; // 20


    return 0;
}