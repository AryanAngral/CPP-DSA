#include <iostream>
#include<vector>
using namespace std;

int binarySearch(int arr[], int target, int s, int e){
    while(s<=e){
        int mid  = (s+e)/2;

        if(arr[mid]== target){
            return mid;
        }
        else if(arr[mid]>target){
            e=mid-1;
        }
        else{
            s=mid+1;
        }
    }
    return -1;
}
int binryrecur(int arr[], int t, int s, int e){
    if(arr[(s+e)/2]==t){
        return (s+e)/2;
    }
    else if(t>arr[(s+e)/2]){
       return binryrecur(arr,t,((s+e)/2)+1,e);
    }
    else if(t<arr[(s+e)/2]){
       return binryrecur(arr,t,e,((s+e)/2)-1);
    }
    else{
        return -1;
    }
    return -1;
}
int main() {
    int arr[7]= {14,18,34,59,66,91,99};
    // int idx=binarySearch(arr,66,0,6);
    int idx= binryrecur(arr,118,0,6);


    cout<<idx<<endl;

    vector<int> nums;
   
    return 0;
}