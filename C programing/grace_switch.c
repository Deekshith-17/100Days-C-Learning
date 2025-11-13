#include <stdio.h>

int main() {
    int div, n, grace ;

    printf("Enter division/class:");
    scanf("%d", &div);

    printf("Enter number of subjects failed: ");
    scanf("%d", &n);

    switch (div) {
        case 1:
            if (n > 3)
                grace = 0;
            else
                grace = 5 * n;
            break;

        case 2:
            if (n > 2)
                grace = 0;
            else
                grace = 4 * n;
            break;

        case 3:
            if (n > 1)
                grace = 0;
            else
                grace = 5;
            break;

        default:
            printf("Invalid division entered.\n");
            return 1;
    }

    printf("Grace marks awarded: %d\n", grace);
    return 0;
}
