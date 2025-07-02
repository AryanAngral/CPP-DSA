#include<iostream>
using namespace std;

int main(){

    int num = 20;
    int *ptr = &num;
    int **pptr = &ptr; //double pointer or pointer to pointer

    cout << ptr << endl; // Address of num
    cout << &num <<endl; // Address of num
    cout << pptr << endl; // Address of ptr
    cout << &ptr << endl; // Address of ptr
    cout << **pptr << endl; // 20
    cout << ***(&pptr) << endl; //20
    cout << *(&pptr) << endl; // address of ptr
    cout << *(&num) << endl; // 20
    cout << **(&ptr) << endl; // 20

    return 0;
}