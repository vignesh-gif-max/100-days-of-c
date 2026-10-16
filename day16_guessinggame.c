#include <stdio.h>

int main() {
    int secret = 7;
    int guess;

    do {
        printf("Guess the number (1-10): ");
        scanf("%d", &guess);

        if (guess > secret) {
            printf("Too high! Try again.\n");
        } else if (guess < secret) {
            printf("Too low! Try again.\n");
        } else {
            printf("Correct! You guessed it!\n");
        }
    } while (guess != secret);

    return 0;
}