#include <stdio.h>

// Function with restrict pointers
void add(int *restrict a, int *restrict b, int *restrict r, int n) {
    for (int i = 0; i < n; i++)
        r[i] = a[i] + b[i];
}

int main() {
    int a[] = {1, 2, 3, 4, 5};
    int b[] = {5, 6, 7, 8, 10};
    int r[5];

    add(a, b, r, 5);

    for (int i = 0; i < 5; i++)
        printf("%d ", r[i]);

    return 0;
}