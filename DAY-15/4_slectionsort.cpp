#include <iostream>

using namespace std;

void selectionSort(int arr[],int size){
    for(int i=0; i<size-1; i++){

        for(int j=i+1; j<size; j++){
            
            if( arr[i] > arr[j] ){

                int temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;

            }

        }
    }
}

void selectrecur(int arr[], int size) {
    if (size <= 1) {
        return;
    }
    int max = 0;
    for (int i = 1; i < size; i++) {
        if (arr[i] > arr[max]) {
            max = i;
        }
    }
    int temp = arr[max];
    arr[max] = arr[size-1];
    arr[size-1] = temp;
    selectrecur(arr, size-1);
}

int main() {
 
    int arr[6] = {10, 19, 13, 18, 17, 14};

    // selectionSort( arr,6);
    selectrecur(arr,6);

    for(auto x: arr){
        cout<<x<<"   ";
    }

    return 0;
}