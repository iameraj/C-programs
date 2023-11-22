#include <stdio.h>

long long calculateFactorial(int n);

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is non-negative
    if (number < 0) {
        printf("Factorial is not defined for negative numbers.\n");
        return 1;  // Exit with an error code
    }

    // Calculate and display the factorial
    long long factorial = calculateFactorial(number);
    printf("Factorial of %d = %lld\n", number, factorial);

    return 0;
}

long long calculateFactorial(int n) {
    if (n == 0 || n == 1) {
        return 1;  // Base case: 0! and 1! are both 1
    } else {
        return n * calculateFactorial(n - 1);  // Recursive case: n! = n * (n-1)!
    }
}
