#include <iostream>

using namespace std;

int linearSearch(int arr[], int target){
    for( int i =0 ; i<7; i++){
        if( arr[i] == target){
            return i;
        }
    }
    return -1;
}

int main() {
    int arr[7] = {14, 78, 34, 99, 12, 99, 77};

    cout<<linearSearch(arr,34)<<endl;

    return 0;
}

