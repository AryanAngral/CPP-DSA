#include <iostream>

using namespace std;

template<typename T>

void swap(T *a, T *b){
    T temp=*a;
    *a=*b;
    *b=temp;
   
}

int main() {
    int a=20;
    int b=30;
    swap(&a,&b);
    cout<<"a: "<<a<<" b: "<<b<<endl;


    return 0;
}