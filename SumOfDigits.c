#include <stdio.h>

int calculateSumOfDigits(int number);

int main() {
    int number;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Calculate and display the sum of digits
    int sum = calculateSumOfDigits(number);
    printf("Sum of digits of %d = %d\n", number, sum);

    return 0;
}

int calculateSumOfDigits(int number) {
    int sum = 0;

    // Take the absolute value to handle negative numbers
    number = (number < 0) ? -number : number;

    while (number != 0) {
        sum += number % 10;  // Add the last digit to the sum
        number /= 10;        // Remove the last digit
    }

    return sum;
}
