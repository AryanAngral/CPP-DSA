#include<iostream>
using namespace std;

int num=10;

int main(){

    int num = 20; // it creates a variable num and store the value 20
    int *ptr = &num; // storw the address of num in a ponter ptr
    int &x = num;

    cout << num << endl; //20
    //We need to use scoperescolution operator to print global value
    cout << ::num << endl;

    cout << ptr << endl; // address of num 
    cout << x <<endl; // 20


    return 0;
}