#include <iostream>

using namespace std;

template <typename X>

auto TotalCount(X arr[],int size, X value){
    int count=0;
    for(int i=0;i<size;i++){
        if(arr[i]==value){
            count++;
        }
    }
    return count;
}

int main() {
    
    {
        char arr[4]={'a','b','a','x'};
        cout<<TotalCount(arr,4,'a')<<endl;
    }
    {
        int arr[7]={11, 22, 11, 56, 88, 99, 11};
        cout<<TotalCount(arr,7,11)<<endl;
    }
    // {
    //     char arr[4]={'a','b','a','x'};
    //     cout<<TotalCount(arr,4,'a');
    // }


    return 0;
}