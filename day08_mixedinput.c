#include <stdio.h>

int main() {
    int rollNumber;
    float cgpa;
    char section;

    printf("Enter your roll number: ");
    scanf("%d", &rollNumber);

    printf("Enter your CGPA: ");
    scanf("%f", &cgpa);

    printf("Enter your section (A/B/C): ");
    scanf(" %c", &section);

    printf("\n--- Student Info ---\n");
    printf("Roll Number : %d\n", rollNumber);
    printf("CGPA        : %.2f\n", cgpa);
    printf("Section     : %c\n", section);

    return 0;
}