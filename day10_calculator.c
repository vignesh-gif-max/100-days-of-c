#include <stdio.h>

int main() {
    float num1, num2, result;
    char operator;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter an operator (+, -, *, /): ");
    scanf(" %c", &operator);

    printf("Enter second number: ");
    scanf("%f", &num2);

    if (operator == '+') {
        result = num1 + num2;
        printf("Result = %.2f\n", result);
    } else if (operator == '-') {
        result = num1 - num2;
        printf("Result = %.2f\n", result);
    } else if (operator == '*') {
        result = num1 * num2;
        printf("Result = %.2f\n", result);
    } else if (operator == '/') {
        if (num2 == 0) {
            printf("Error: Cannot divide by zero\n");
        } else {
            result = num1 / num2;
            printf("Result = %.2f\n", result);
        }
    } else {
        printf("Invalid operator\n");
    }

    return 0;
}