#include <iostream>
using namespace std;

void insertionSort(int arr[], int n)
{
  for (int i = 1; i < n; i++)
  {
    int key = arr[i]; // Current element to insert
    int j = i - 1;

    // Shift elements of arr[0..i-1], that are greater than key, to one position ahead
    while (j >= 0 && arr[j] > key)
    {
      arr[j + 1] = arr[j]; // Shifting
      j--;
    }
    arr[j + 1] = key; // Insert key at correct position
  }
}

void printArray(int arr[], int n)
{
  for (int i = 0; i < n; i++)
  {
    cout << arr[i] << " ";
  }
  cout << endl;
}

int main()
{
  int arr[] = {12, 11, 13, 5, 6};
  int n = sizeof(arr) / sizeof(arr[0]);

  cout << "Original array: ";
  printArray(arr, n);

  insertionSort(arr, n);

  cout << "Sorted array: ";
  printArray(arr, n);

  return 0;
}
