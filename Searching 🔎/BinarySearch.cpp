#include <iostream>
using namespace std;

// Iterative
int binarySearchIter(int arr[], int n, int key) {
    int low = 0, high = n - 1;
    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] == key) return mid;
        else if (arr[mid] < key) low = mid + 1;
        else high = mid - 1;
    }
    return -1;
}

// Recursive
int binarySearchRec(int arr[], int low, int high, int key) {
    if (low > high) return -1;
    int mid = low + (high - low) / 2;
    if (arr[mid] == key) return mid;
    if (arr[mid] < key) return binarySearchRec(arr, mid + 1, high, key);
    return binarySearchRec(arr, low, mid - 1, key);
}

int main() {
    int arr[] = {1, 3, 5, 7, 9, 11};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 7;
    cout << "Iterative: " << binarySearchIter(arr, n, key) << endl;
    cout << "Recursive: " << binarySearchRec(arr, 0, n - 1, key) << endl;
    return 0;
}