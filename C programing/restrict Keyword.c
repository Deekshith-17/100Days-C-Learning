#include <stdio.h>

// Function with restrict pointers
void update(int *restrict x, int *restrict y) {
   *x = *x + 10;
   *y = *y + 20;
}

int main() {
   int a = 5, b = 10;
   
   update(&a, &b);
   
   printf("a = %d, b = %d\n", a, b);
   
   return 0;
}