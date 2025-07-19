#include <iostream>

using namespace std;

void bubbleSort(int arr[], int size){

    int i = 0;
    bool flag = false;
    while( i < size && flag == false ){

        for(int j=0; j<size; j++){
            if( arr[j] > arr[j+1]){
                swap( arr[i], arr[j] );
                flag = true;
            }
        }
        // cout<<"<>";
        i++;
        size --;
    }

}

void bubblerecu(int arr[], int size){
    if(size<1) return;
    bool flag=false;
    for(int i=0;i<size;i++){
        if(arr[i]>arr[i+1]){
            swap(arr[i],arr[i+1]);
            flag =true;
        }
    }
    if(flag == true){
        return;
    }
    bubblerecu(arr,size-1);
}

int main() {
    
    int arr[7] = {1,22, 2, 3, 4, 5, 6};
    // bubbleSort(arr,7);
    bubblerecu(arr,7);
    for(auto x: arr){
        cout<<x<<" ";
    }

    return 0;
}