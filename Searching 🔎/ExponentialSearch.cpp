#include <iostream>
#include <algorithm>
using namespace std;

int binarySearch(int arr[], int low, int high, int key) {
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

int exponentialSearch(int arr[], int n, int key) {
    if (n == 0) return -1;
    if (arr[0] == key) return 0;

    int i = 1;
    while (i < n && arr[i] <= key) {
        i *= 2;
    }
    return binarySearch(arr, i / 2, min(i, n - 1), key);
}

int main() {
    int arr[] = {2, 3, 4, 10, 40, 50, 70};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 10;

    int result = exponentialSearch(arr, n, key);
    if (result != -1)
        cout << "Element found at index " << result << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}