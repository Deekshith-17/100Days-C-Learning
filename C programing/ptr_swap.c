#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2;
    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter first number: ");
    scanf("%d", &num1);
    printf("Enter second number: ");
    scanf("%d", &num2);

    printf("Before swapping num1 is %d and num2 is %d\n", *ptr1, *ptr2);

    *ptr1 = *ptr1 + *ptr2;
    *ptr2 = *ptr1 - *ptr2;
    *ptr1 = *ptr1 - *ptr2;

    printf("After swapping num1 is %d and num2 is %d\n", *ptr1, *ptr2);

    return 0;
}
