#include <stdio.h>

int main() {
    int a = 10;

    const int *const ptr = &a;  // constant pointer to constant

    printf("Value of a: %d\n", *ptr);

    // *ptr = 15;  // we cannot modify value
    // ptr = &b;   // we annot change pointer location
    return 0;
}