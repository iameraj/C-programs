#include <stdio.h>

#define MAX_SIZE 100

void displayArray(int arr[], int size);
void insertElement(int arr[], int *size, int position, int element);

int main() {
    int arr[MAX_SIZE];
    int size, position, element;

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

    // Input the position and element to be inserted
    printf("\nEnter the position to insert: ");
    scanf("%d", &position);

    // Validate the position
    if (position < 1 || position > size + 1) {
        printf("Invalid position to insert.\n");
        return 1; // Exit with an error code
    }

    printf("Enter the element to insert: ");
    scanf("%d", &element);

    // Insert the element at the specified position
    insertElement(arr, &size, position, element);

    // Display the modified array
    printf("\nArray after insertion:\n");
    displayArray(arr, size);

    return 0;
}

void displayArray(int arr[], int size) {
    for (int i = 0; i < size; ++i) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

void insertElement(int arr[], int *size, int position, int element) {
    // Shift elements to make space for the new element
    for (int i = *size; i >= position; --i) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[position - 1] = element;

    // Increment the size of the array
    (*size)++;
}
