#include <stdio.h>

int main() {
    int number, originalNumber, remainder, sum = 0;

    printf("Enter a number: ");
    scanf("%d", &number);

    originalNumber = number;

    while (number != 0) {
        remainder = number % 10;
        sum += remainder;
        number /= 10;
    }

    printf("Sum of digits of %d = %d\n", originalNumber, sum);

    return 0;
}