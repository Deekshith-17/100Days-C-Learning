#include <stdio.h>

int main() {
    char upper = 'M';
    char lower = upper + 32; // Convert uppercase to lowercase
    
    char small = 'm';
    char capital = small - 32; // Convert lowercase to uppercase
    
    printf("Original Uppercase: %c\n", upper);
    printf("Converted to Lowercase: %c\n", lower);
    printf("Original Lowercase: %c\n", small);
    printf("Converted to Uppercase: %c\n", capital);
    return 0;
}