#include <stdio.h>

int main (){

   int a = 10;
   int *b = &a;
   printf("a: %d \n Address: %d \n Value at 'a': %d\n\n", a, b, *b);

   int **c = &b;
   printf("b: %d \n Pointer to 'b' is 'c': %d \n Value at 'b': %d\n", b, c, *c);
   printf("Value of 'a' from 'c': %d", **c);

   return 0;
}