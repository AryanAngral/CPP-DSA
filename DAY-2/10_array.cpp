#include<iostream>
using namespace std;

int main(){

    int num1 = 20;
    int num2 = 30;
    int* ptr = &num1;

    cout << ptr << endl;

    ptr++;

    cout << ptr << endl;

    return 0;
}