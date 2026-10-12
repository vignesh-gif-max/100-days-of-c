#include <stdio.h>

int main() {
    int number, original, digit, reversed = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    original = number;

    while (number != 0) {
        digit = number % 10;
        reversed = reversed * 10 + digit;
        number = number / 10;
    }

    printf("Reverse of %d is %d\n", original, reversed);

    return 0;
}