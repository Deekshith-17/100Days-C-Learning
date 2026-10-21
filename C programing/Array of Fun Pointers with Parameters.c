#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int sub(int a, int b) {
    return a - b;
}

int mult(int a, int b) {
    return a * b;
}

int main() {
    // array of 3 function pointers taking (int, int) and returning int
    int (*funcArr[3])(int, int) = { add, sub, mult };

    printf("Add: %d\n", funcArr[0](10, 5));   // calls add
    printf("Subtract: %d\n", funcArr[1](10, 5)); // calls sub
    printf("Multiply: %d\n", funcArr[2](10, 5)); // calls mult
    return 0;
}