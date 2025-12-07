#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *fptr;
    char mystring[100];

    fptr = fopen("filename.txt", "r");
    if (fptr == NULL) {
        printf("Error opening file!\n");
        return 1;
    }

    if (fgets(mystring, sizeof(mystring), fptr) != NULL) {
        printf("%s", mystring);
    }

    fclose(fptr);
    return 0;
}
