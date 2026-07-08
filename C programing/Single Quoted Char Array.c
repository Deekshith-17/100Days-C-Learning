#include <stdio.h>

int main() {
    char arr[] = {'H', 'i', '!'};  // Creating a single-quoted character array
    int i;
    
    for(i = 0; i < 3; i++) {
        printf("%c ", arr[i]);  // Prints each character
    }
    
    return 0;
}