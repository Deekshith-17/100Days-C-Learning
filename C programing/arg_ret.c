#include <stdio.h>

int add(int x, int y);

int main() {
    int a, b, sum;

    printf("Enter a value: ");
    scanf("%d", &a);

    printf("Enter b value: ");
    scanf("%d", &b);

    sum = add(a, b);

    printf("Sum of a and b is : %d\n", sum);

    return 0;
}

int add(int x, int y) {
    return x + y;
}
