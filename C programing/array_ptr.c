#include <stdio.h>

int main() {
    int array[100];
    int n, i;
    int *ptr;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    ptr = array;

    for (i = 0; i < n; i++) {
        printf("Enter array[%d]: ", i);
        scanf("%d", ptr + i);
    }

    printf("Your array:\n");
    for (i = 0; i < n; i++) {
        printf("array[%d]: %d\n", i, *(ptr + i));
    }

    return 0;
}
