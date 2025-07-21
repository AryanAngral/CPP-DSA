#include <iostream>
#include<vector>
#include<algorithm>
using namespace std;

void merge(vector<int> &arr, int mid, int si, int li) {
    int n1 = mid - si + 1;
    int n2 = li - mid;
    vector<int> left(n1), right(n2);
    for(int i = 0; i < n1; i++)
        left[i] = arr[si + i];
    for(int j = 0; j < n2; j++)
        right[j] = arr[mid + 1 + j];

    int i = 0, j = 0, k = si;
    while(i < n1 && j < n2) {
        if(left[i] <= right[j]) {
            arr[k++] = left[i++];
        } else {
            arr[k++] = right[j++];
        }
    }
    while(i < n1) {
        arr[k++] = left[i++];
    }
    while(j < n2) {
        arr[k++] = right[j++];
    }
}

void mergeSort(vector<int> &arr, int si, int li){

    if(si<li){
        int mid=(si+li)/2;
        mergeSort(arr,si,mid);
        mergeSort(arr,mid+1,li);

        merge( arr, mid, si, li);

    }

}


int main() {
    vector<int> arr = {12, 56, 16, 23, 89, 90};

    mergeSort(arr, 0, arr.size() - 1);

    for(auto x : arr) {
        cout << x << " ";
    }
    cout << endl;
    return 0;
}