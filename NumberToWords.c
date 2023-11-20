#include <stdio.h>

void convertToWords(int num);

int main() {
    int num;

    // Accept a number from the user
    printf("Enter a number: ");
    scanf("%d", &num);

    // Display the number in words
    convertToWords(num);

    return 0;
}

void convertToWords(int num) {
    char *ones[] = {"", "One", "Two", "Three", "Four", "Five", "Six", "Seven", "Eight", "Nine"};
    char *teens[] = {"", "Eleven", "Twelve", "Thirteen", "Fourteen", "Fifteen", "Sixteen", "Seventeen", "Eighteen", "Nineteen"};
    char *tens[] = {"", "Ten", "Twenty", "Thirty", "Forty", "Fifty", "Sixty", "Seventy", "Eighty", "Ninety"};

    if (num < 1 || num > 9999) {
        printf("Out of range (1-9999)\n");
        return;
    }

    if (num >= 1000) {
        printf("%s Thousand ", ones[num / 1000]);
        num %= 1000;
    }

    if (num >= 100) {
        printf("%s Hundred ", ones[num / 100]);
        num %= 100;
    }

    if (num >= 20) {
        printf("%s ", tens[num / 10]);
        num %= 10;
    } else if (num >= 11 && num <= 19) {
        printf("%s ", teens[num - 10]);
        return;  // No need to process the units place for teens
    }

    if (num > 0) {
        printf("%s ", ones[num]);
    }

    printf("\n");
}

