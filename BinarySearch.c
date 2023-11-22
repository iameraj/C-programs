#include <stdio.h>

int binarySearch(int arr[], int size, int key);

int main() {
    int size, key;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    int arr[size];

    // Input the elements of the sorted array
    printf("Enter the elements of the sorted array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform binary search
    int index = binarySearch(arr, size, key);

    // Display the result
    if (index != -1) {
        printf("Element %d found at index %d.\n", key, index);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

int binarySearch(int arr[], int size, int key) {
    int low = 0, high = size - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;

        if (arr[mid] == key) {
            return mid;  // Element found, return the index
        } else if (arr[mid] < key) {
            low = mid + 1;  // Search in the right half
        } else {
            high = mid - 1;  // Search in the left half
        }
    }

    return -1;  // Element not found
}
