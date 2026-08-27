#include <stdio.h>

int main() {
    int a = 5;
    int b = 30;

    const int *ptr = &a; // pointer to constant int

    printf("Value of a: %d\n", *ptr);

    // *ptr = 10; //we cannot modify value through pointer

    ptr = &b; // canging pointer address
    printf("Now pointing to b: %d\n", *ptr);
    return 0;
}