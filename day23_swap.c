#include <stdio.h>

void swapAttempt(int a, int b) {
    int temp = a;
    a = b;
    b = temp;
    printf("Inside function: a = %d, b = %d\n", a, b);
}

int main() {
    int x, y, temp;

    printf("Enter first number: ");
    scanf("%d", &x);
    printf("Enter second number: ");
    scanf("%d", &y);

    printf("Before: x = %d, y = %d\n", x, y);

    swapAttempt(x, y);
    printf("After function call: x = %d, y = %d\n", x, y);

    temp = x;
    x = y;
    y = temp;
    printf("After swapping in main: x = %d, y = %d\n", x, y);

    return 0;
}