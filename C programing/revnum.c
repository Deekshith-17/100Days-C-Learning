#include <stdio.h>

int main() {
    int num, rem, rev = 0;
    int org;

    printf("Enter an integer: ");
    scanf("%d", &num);

    org = num;

    do {
        rem = num % 10;
        rev = rev * 10 + rem;
        num = num / 10;
    } while (num != 0);

    printf("Original number: %d\n", org);
    printf("Reversed number: %d\n", rev);

    return 0;
}
