#include <stdio.h>

int add(int a, int b) {
    return a + b;
}

int main() {
    int (*func_ptr)(int, int) = add; // store address of add
    printf("Result: %d\n", func_ptr(3, 5)); // call add using pointer
    return 0;
}