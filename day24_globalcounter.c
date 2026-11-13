#include <stdio.h>

int counter = 0;

void increase() {
    int local = 0;

    counter++;
    local++;

    printf("Global counter = %d, Local = %d\n", counter, local);
}

int main() {
    increase();
    increase();
    increase();

    printf("Final counter in main = %d\n", counter);

    return 0;
}