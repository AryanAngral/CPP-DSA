#include <iostream>
using namespace std;

int binarySearch(int arr[], int start, int end, int target) {
    if (start > end) {
        return -1;  // Target not found
    }

    int mid = start + (end - start) / 2;

    if (arr[mid] == target) {
        return mid;
    } else if (target < arr[mid]) {
        return binarySearch(arr, start, mid - 1, target);
    } else {
        return binarySearch(arr, mid + 1, end, target);
    }
}

int main() {
    int arr[] = {1, 2, 3, 5, 9, 11};
    int size = sizeof(arr) / sizeof(int);
    int target = 11;

    int result = binarySearch(arr, 0, size - 1, target);

    if (result != -1) {
        cout << "Element found at index: " << result << endl;
    } else {
        cout << "Element not found in the array." << endl;
    }

    return 0;
}