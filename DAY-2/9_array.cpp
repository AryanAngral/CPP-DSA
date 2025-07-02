#include<iostream>
using namespace std;

int main(){

    int arr[5] = {10, 20, 30, 40, 50};

    // cout << arr << endl;

    // cout << arr[2] << endl;

    int i = 0;
    // while( i != 5 ){
    //     cout << &arr[i] << "\t" ;
    //     i++;
    // }

    // while( i != 5 ){
    //     cout << arr+i <<  endl;
    //     i++;
    // }

    // while( i != 5 ){
    //     cout << *(arr+i) <<  endl;
    //     i++;
    // }
 
    int* ptr1;
    double* ptr2;
    cout <<sizeof(ptr1);
    cout <<sizeof(ptr2);

    return 0;
}