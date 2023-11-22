#include <stdio.h>

void generateFibonacci(int n);

int main() {
    int n;

    // Input the number of terms for the Fibonacci series
    printf("Enter the number of terms for the Fibonacci series: ");
    scanf("%d", &n);

    // Generate and print the Fibonacci series
    generateFibonacci(n);

    return 0;
}

void generateFibonacci(int n) {
    int first = 0, second = 1, next;

    printf("Fibonacci Series for %d terms:\n", n);

    for (int i = 0; i < n; ++i) {
        printf("%d, ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");
}
