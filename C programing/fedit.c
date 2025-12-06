#include <stdio.h>

int main() {
    FILE *fptr;
    fptr = fopen("filename.txt", "w");

    if (fptr == NULL) {
        return 1;
    }

    fprintf(fptr, "Hello, world!\n");

    fclose(fptr);
    return 0;
}
