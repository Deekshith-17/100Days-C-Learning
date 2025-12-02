#include <stdio.h>

void calculateSum(int *a, int *b, int *sum) {
    *sum = *a + *b;
}

int main() {
    int num1, num2, result;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);
    calculateSum(&num1, &num2, &result);
    printf("Sum of %d and %d is: %d\n", num1, num2, result);
    return 0;
}
