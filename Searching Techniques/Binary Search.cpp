#include <iostream>
using namespace std;

// Function to perform binary search
int binarySearch(const int arr[], int size, int target) {
    int low = 0;
    int high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        // Check if target is present at mid
        if (arr[mid] == target) {
            return mid;
        }
        // If target is greater, ignore the left half
        if (arr[mid] < target) {
            low = mid + 1;
        }
        // If target is smaller, ignore the right half
        else {
            high = mid - 1;
        }
    }

    // Target is not present in the array
    return -1;
}

// Utility function to print an array
void printArray(const int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        cout << arr[i] << " ";
    }
    cout<<endl;
}

int main() {
    // Initialize a sorted array
    int arr[] = {2, 3, 4, 10, 40};

    int size = sizeof(arr) / sizeof(arr[0]);
    cout << "Array: ";
    printArray(arr, size);

    // Define the target value to search
    int target = 10;

    // Perform binary search
    int result = binarySearch(arr, size, target);
    if (result != -1) {
        cout << "Element found at index " << result <<endl;
    } else {
        cout << "Element not found in the array" <<endl;
    }

    return 0;
}
