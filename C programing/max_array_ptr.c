#include <stdio.h>

int main() {
    int array[100];
    int n, i;
    int *ptr;
    ptr = array;

    printf("Enter the number of elements: ");
    scanf("%d", &n);

    for (i = 0; i < n; i++) {
        printf("Enter array[%d]: ", i);
        scanf("%d", (ptr + i));
    }

    printf("Your array is:\n");
    for (i = 0; i < n; i++) {
        printf("Array[%d]: %d\n", i, *(ptr + i));
    }

    int max = *ptr;
    for (i = 1; i < n; i++) {
        if (*(ptr + i) > max) {
            max = *(ptr + i);
        }
    }

    printf("The maximum element in the array is: %d\n", max);

    return 0;
}
