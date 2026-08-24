#include <stdio.h>

int main() {
    int x = 10;
    int y = 20;

    int *const ptr = &x;  // constant pointer to int

    printf("Value of x: %d\n", *ptr);

    *ptr = 15;  // can change the value at address
    printf("Modified value of x: %d\n", *ptr);

    // ptr = &y;  // changing pointer address is not allowed
    return 0;
}