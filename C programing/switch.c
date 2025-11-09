#include <stdio.h>

int main() {
    int i = 2;

    switch(i) {
        case 1:
            printf("i is 1\n");
            break;
        case 2:
            printf("i is 2\n");
            break;
        case 3:
            printf("i is 3\n");
            break;
        default:
            printf("i is not 1, 2, or 3\n");
    }

    return 0;
}
