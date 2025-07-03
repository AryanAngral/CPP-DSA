#include<iostream>
using namespace std;

int sum1(int *arr, int size){
   if(size <= 0){
    return 0;
   }
   return *arr + sum1(arr+1,size-1);

}

int main(){
    int arr[5] = {10, 12, 45, 23, 77};
    int size = sizeof(arr)/sizeof(int);
    cout<<sum1(arr,size);

    return 0;
}