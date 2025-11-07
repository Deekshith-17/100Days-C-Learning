#include <stdio.h>

int main() {
    float cp, sp, val;

    printf("Enter Cost Price (cp): ");
    scanf("%f", &cp);

    printf("Enter Selling Price (sp): ");
    scanf("%f", &sp);

    val = sp - cp;

    if (val > 0) {
        printf("Profit = %.2f\n", val);
    } else if (val < 0) {
        printf("Loss = %.2f\n", -val);
    } else {
        printf("No Profit, No Loss.\n");
    }

    return 0;
}
