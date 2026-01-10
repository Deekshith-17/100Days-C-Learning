#include <stdio.h>

int main() {
    char c1 = 'A' + 1; 
    char c2 = 'C' - 1; 
    int diff = 'C' - 'A';

    printf("A + 1 = %c\n", c1);
    printf("C - 1 = %c\n", c2);
    printf("C - A = %d\n", diff);
    return 0;
}