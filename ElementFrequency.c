#include <stdio.h>

#define MAX_SIZE 100

int findFrequency(int arr[], int size, int element);

int main() {
    int arr[MAX_SIZE];
    int size, element, frequency;

    // Input the size of the array
    printf("Enter the size of the array: ");
    scanf("%d", &size);

    // Input the elements of the array
    printf("Enter the elements of the array:\n");
    for (int i = 0; i < size; ++i) {
        printf("Enter element %d: ", i + 1);
        scanf("%d", &arr[i]);
    }

    // Input the element to find the frequency
    printf("Enter the element to find the frequency: ");
    scanf("%d", &element);

    // Find the frequency of the element
    frequency = findFrequency(arr, size, element);

    // Display the result
    printf("Frequency of element %d: %d\n", element, frequency);

    return 0;
}

int findFrequency(int arr[], int size, int element) {
    int frequency = 0;

    for (int i = 0; i < size; ++i) {
        if (arr[i] == element) {
            frequency++;
        }
    }

    return frequency;
}
