#include <iostream>

using namespace std;

int linearSearch(int arr[], int target, int s, int e){
    if(s>e){
        return -1;
    }
    if(arr[s]==target){
        return s;
    }
    return linearSearch(arr,target,s+1,e);
}

int main() {
    int arr[7]={14,78,34,99,12,90,77};
    int idx=linearSearch(arr,78,0,6);
    cout<<idx<<endl;
    return 0;
}