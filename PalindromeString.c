#include <stdio.h>
#include <string.h>

#define MAX_LENGTH 100

int isPalindrome(char str[]);

int main() {
    char input[MAX_LENGTH];

    // Input a string from the user
    printf("Enter a string: ");
    fgets(input, sizeof(input), stdin);

    // Remove the newline character from the input
    input[strcspn(input, "\n")] = '\0';

    // Check if the string is a palindrome
    if (isPalindrome(input)) {
        printf("The string is a palindrome.\n");
    } else {
        printf("The string is not a palindrome.\n");
    }

    return 0;
}

int isPalindrome(char str[]) {
    int length = strlen(str);
    int i, j;

    // Check each character from the start and end of the string towards the center
    for (i = 0, j = length - 1; i < j; ++i, --j) {
        // If characters are not equal, the string is not a palindrome
        if (str[i] != str[j]) {
            return 0; // Not a palindrome
        }
    }

    // If the loop completes, the string is a palindrome
    return 1; // Palindrome
}
