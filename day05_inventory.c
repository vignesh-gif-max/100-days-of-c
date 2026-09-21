#include <stdio.h>

int main() {
    int stock = 120;       // Initial stock in the warehouse
    int newStock = 30;     // New items received
    int damaged = 5;       // Damaged items to be removed

    // Add new stock to current stock
    stock = stock + newStock;
    printf("Stock after receiving new items: %d\n", stock);

    // Subtract damaged items from stock
    stock = stock - damaged;
    printf("Stock after removing damaged items: %d\n", stock);

    // Use post-increment: print current value, then increment
    printf("Stock after post-increment: %d\n", stock++);

    // Now stock has already increased by 1 in the background
    printf("Final Recorded Stock: %d\n", stock);

    return 0;
}