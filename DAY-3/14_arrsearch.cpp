#include<iostream>
using namespace std;

int search(int *arr,int size, int target){
    static int x=0;
    if(*arr == target && size !=0){
        return x;
    }
    x++;
    return search(arr+1,size-1,target);
}

int main(){
    int arr[6]={1,2,3,9,5,11};
    int size= sizeof(arr)/sizeof(int);
    cout <<search(arr,size,11);
    return 0;
}