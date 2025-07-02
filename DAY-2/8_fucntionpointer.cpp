#include<iostream>
using namespace std;

void func(){
    cout << "hellow world!" << endl;
}
void add(int a, int b){
    cout << a+b << endl;
}
int main(){
    
    void (*ptr) (); //fucntion pointer

    ptr = func;

    ptr();
    func();

    void (*ptr1) (int,int);

    ptr1 = add;

    ptr1(1,2);
    add(1,2);


    return 0;
}