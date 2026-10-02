#include <stdio.h>

int main() {
    float num1, num2, result;
    int choice;

    printf("Enter first number: ");
    scanf("%f", &num1);

    printf("Enter second number: ");
    scanf("%f", &num2);

    printf("Choose operation:\n");
    printf("1. Add\n2. Subtract\n3. Multiply\n4. Divide\n");
    printf("Enter choice (1-4): ");
    scanf("%d", &choice);

    switch (choice) {
        case 1:
            result = num1 + num2;
            printf("Result = %.2f\n", result);
            break;
        case 2:
            result = num1 - num2;
            printf("Result = %.2f\n", result);
            break;
        case 3:
            result = num1 * num2;
            printf("Result = %.2f\n", result);
            break;
        case 4:
            if (num2 == 0) {
                printf("Error: Cannot divide by zero\n");
            } else {
                result = num1 / num2;
                printf("Result = %.2f\n", result);
            }
            break;
        default:
            printf("Invalid choice\n");
    }

    return 0;
}