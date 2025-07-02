#include<iostream>
using namespace std;

int main(){

    //Constant variable

    const int num = 20;

    // num = 10;

    cout << num << endl;

    const int* ptr = &num;

    cout << ptr << endl;

    return 0;
}