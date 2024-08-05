#include <iostream>

// Function to perform insertion sort on an array
void insertionSort(int arr[], int n) {
    for (int i = 1; i < n; ++i) {
        int key = arr[i];
        int j = i - 1;
        // Move elements of arr[0..i-1], that are greater than key,
        // to one position ahead of their current position
        while (j >= 0 && arr[j] > key) {
            arr[j + 1] = arr[j];
            j = j - 1;
        }
        arr[j + 1] = key;
    }
}

// Function to print the array
void printArray(int arr[], int n) {
    for (int i = 0; i < n; ++i) {
        std::cout << arr[i] << " ";
    }
    std::cout << std::endl;
}

int main() {
    int n;

    std::cout << "Enter the number of elements: ";
    std::cin >> n;

    int arr[n];  // Declare an array of size n

    std::cout << "Enter the elements: ";
    for (int i = 0; i < n; ++i) {
        std::cin >> arr[i];
    }

    std::cout << "Array before sorting: ";
    printArray(arr, n);

    insertionSort(arr, n);

    std::cout << "Array after sorting: ";
    printArray(arr, n);

    return 0;
}

