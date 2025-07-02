#include<iostream>
using namespace std;

int main(){

    int a=10, b=20, c=30, d=40;
    int* arr[5] = {&a, &b, &c, &d}; //array of pointers

    int i=0;
    // while(i!=4){
    //     cout<< arr[i]<<endl;
    //     i++;
    // }
    // i=0;
    // while(i!=4){
    //     cout<<arr+i<<endl;
    //     i++;
    // }

    while(i!=4){
        cout<< **(arr+i)<<endl;
        i++;
    }

    return 0;
}