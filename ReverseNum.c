#include <stdio.h>

int main() {
    long long num, reversedNum = 0;

    // Input a number from the user
    printf("Enter a number: ");
    scanf("%lld", &num);

    // Reverse the number
    while (num != 0) {
        int digit = num % 10;
        reversedNum = reversedNum * 10 + digit;
        num /= 10;
    }

    // Display the reversed number
    printf("Reversed Number: %lld\n", reversedNum);

    return 0;
}
