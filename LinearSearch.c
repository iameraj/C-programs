#include <stdio.h>

#define MAX_SIZE 100

int linearSearch(int arr[], int size, int key);

int main() {
    int arr[MAX_SIZE];
    int size, key, position;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to be searched
    printf("Enter the element to search: ");
    scanf("%d", &key);

    // Perform linear search
    position = linearSearch(arr, size, key);

    // Display the result
    if (position != -1) {
        printf("Element %d found at index %d.\n", key, position);
    } else {
        printf("Element %d not found in the array.\n", key);
    }

    return 0;
}

int linearSearch(int arr[], int size, int key) {
    for (int i = 0; i < size; ++i) {
        if (arr[i] == key) {
            return i; // Return the index if element is found
        }
    }

    return -1; // Return -1 if element is not found
}
