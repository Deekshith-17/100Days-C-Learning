#include <stdio.h>
int main() {
   int a[] = {1,2,3,4,5};
   int *x = a, i;
   for (i=0; i<5; i++){
      printf("%d\n", *x);
      x++;
   }
   return 0;
}