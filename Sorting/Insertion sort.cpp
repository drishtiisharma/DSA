#include <iostream>
using namespace std;

// Function to perform insertion sort
void insertionSort(int arr[], int n) {
    // Traverse from the second element to the end of the array
    for (int i = 1; i < n; ++i) {
        int key = arr[i]; // The current element to be compared
        int j = i - 1;

        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            --j;
        }
        arr[j + 1] = key;
    }
}

// Function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
    // Array to be sorted
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); // Number of elements in array

    cout << "Original array: \n";
    printArray(arr, n);

    // Perform insertion sort
    insertionSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);

    return 0;
}
