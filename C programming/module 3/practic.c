#include <stdio.h>

int main() {
    int N; 
   scanf("%d", &N);
   // Checking if you can buy Punjabi
    if (N >= 1000) {
        printf("I will buy Punjabi\n");
        N -= 1000; // Reduce the amount of money after buying Punjabi

        // Checking if you can buy shoes
        if (N >= 500) {
            printf("I will buy new shoes\n");
            printf("Alisa will buy new shoes\n");
            N -= 500; // Reduce the amount of money after buying shoes
        } else {
            printf("Bad luck!\n"); // Not enough money to buy shoes
        }
    } else {
        printf("Bad luck!\n"); // Not enough money to buy Punjabi
    }

    return 0;
}



