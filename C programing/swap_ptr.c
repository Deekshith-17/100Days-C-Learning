#include <stdio.h>

int main() {
    int num1, num2;
    int *ptr1, *ptr2, temp;

    ptr1 = &num1;
    ptr2 = &num2;
    printf("Enter num1 : ");
    scanf("%d", &num1);
    printf("Enter num2 : ");
    scanf("%d",&num2);

    printf("before swapping num1 is %d and num2 is %d\n", *ptr1, *ptr2);

    temp = *ptr1;
    *ptr1 = *ptr2;
    *ptr2 = temp;

    printf("after swapping num1 is %d and num2 is %d\n", *ptr1, *ptr2);

    return 0;
}
