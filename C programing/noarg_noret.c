#include <stdio.h>

void sum();

int main() {
    sum();
    return 0;
}

void sum() {
    int a, b;
    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter b value: ");
    scanf("%d", &b);

    printf("Sum of a and b is : %d\n", a + b);
}
