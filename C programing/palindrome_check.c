#include <stdio.h>

int main() {
    int num, temp, reverse = 0, reminder;
    printf("Enter a number: ");
    scanf("%d", &num);
    temp = num;
    while (temp != 0) {
        reminder = temp % 10;
        reverse = reverse * 10 + reminder;
        temp = temp / 10;
    }
    if (num == reverse)
        printf("%d is a palindrome.\n", num);
    else
        printf("%d is not a palindrome.\n", num);
    return 0;
}
