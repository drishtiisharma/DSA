#include <iostream>
using namespace std;

// function to perform bubble sort
void bubbleSort(int arr[], int n) {
    bool swapped;

    // traversing through all array elements
    for (int i = 0; i < n - 1; ++i) {
        swapped = false;

        for (int j = 0; j < n - i - 1; ++j) {
                if (arr[j] > arr[j + 1]) {
                swap(arr[j], arr[j + 1]);
                swapped = true;
            }
        }

        // if no two elements were swapped by inner loop, then break
        if (!swapped) {
            break;
        }
    }
}

// function to print an array
void printArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout << endl;
}

int main() {
  //given array
    int arr[] = {64, 34, 25, 12, 22, 11, 90};
    int n = sizeof(arr) / sizeof(arr[0]); 

    cout << "Original array: \n";
    printArray(arr, n);

    // performing bubble sort
    bubbleSort(arr, n);

    cout << "Sorted array: \n";
    printArray(arr, n);
    
    return 0;
}
