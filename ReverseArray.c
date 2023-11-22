#include <stdio.h>

#define MAX_SIZE 100

void printReverseArray(int arr[], int size);

int main() {
    int arr[MAX_SIZE];
    int size;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Display the original array
    printf("\nOriginal Array:\n");
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    // Print the reverse of the array
    printf("\nReverse of the Array:\n");
    printReverseArray(arr, size);

    return 0;
}

void printReverseArray(int arr[], int size) {
    for (int i = size - 1; i >= 0; --i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
