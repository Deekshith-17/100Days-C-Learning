#include <stdio.h>

int main() {
    // storing the string "Hi" in a character array (includes '\0' automatically)
    char str[] = "Hi"; 
    printf("String: %s\n", str);   
    printf("Size of str: %lu\n", sizeof(str));  
    return 0;
}