#include <stdio.h>
#include <stdlib.h>

int main() {
    int* ptr;
    int n;

    printf("Enter size of elements: ");
    scanf("%d", &n);

    // Memory allocated dynamically using malloc()
    ptr = (int*)malloc(n * sizeof(int));

    // Checking for memory allocation
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
    } else {
        printf("Memory successfully allocated using malloc.\n");

        // Assigning values
        for (int i = 0; i < n; ++i) {
            ptr[i] = i + 1;
        }

        // Printing values
        printf("The elements of the array are: ");
        for (int j = 0; j < n; ++j) {
            printf("%d ", ptr[j]);
        }
        printf("\n");

        // Free allocated memory
        free(ptr);
    }

    return 0;
}