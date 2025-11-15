#include <stdio.h>

int main() {
    int num, i, isprime;

    for (num = 2; num <= 300; num++) {
        isprime = 1;
        for (i = 2; i <= num / 2; i++) {
            if (num % i == 0) {
                isprime = 0;
                break;
            }
        }
        if (isprime == 1) {
            printf("%d \n ", num);
        }
    }

    return 0;
}
