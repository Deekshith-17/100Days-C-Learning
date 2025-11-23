#include <stdio.h>

int main() {
    int a = 5;
    int *ptr;
    ptr = &a;

    printf("value of a using variable: %d\n", a);
    printf("Address of a using variable: %p\n", (void*)&a);
    printf("value of a using pointer variable: %d\n", *ptr);
    printf("Address of a pointer using variable: %p\n", (void*)ptr);

    return 0;
}
