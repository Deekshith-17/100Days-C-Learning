#include <stdio.h>

int main() {
    int a, b;
    printf("Enter two integers:\n");
    scanf("%d %d", &a, &b);

    if (a > b) {
        printf("Maximum = %d\n", a);
    } else if (b > a) {
        printf("Maximum = %d\n", b);
    } else {
        printf("Both numbers are equal: %d\n", a);
    }

    return 0;
}
