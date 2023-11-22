#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size);
void deleteElement(int arr[], int *size, int element);

int main() {
    int arr[MAX_SIZE];
    int size, element;

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
    displayArray(arr, size);

    // Input the element to be deleted
    printf("\nEnter the element to delete: ");
    scanf("%d", &element);

    // Delete the element from the array
    deleteElement(arr, &size, element);

    // Display the modified array
    printf("\nArray after deletion:\n");
    displayArray(arr, size);

    return 0;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void deleteElement(int arr[], int *size, int element) {
    int i, j;

    // Find the index of the element to be deleted
    for (i = 0; i < *size; ++i) {
        if (arr[i] == element) {
            break;
        }
    }

    // If the element is not found
    if (i == *size) {
        printf("Element %d not found in the array.\n", element);
        return;
    }

    // Shift elements to overwrite the element to be deleted
    for (j = i; j < *size - 1; ++j) {
        arr[j] = arr[j + 1];
    }

    // Decrease the size of the array
    (*size)--;
    printf("Element %d deleted successfully.\n", element);
}
