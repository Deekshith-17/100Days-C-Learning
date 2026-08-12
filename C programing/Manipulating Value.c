#include <stdio.h>

int main (){

   int a = 10;
   int *b = &a;
   float x = 10.5;
   float *y = &x;

   *b = 100;
   *y = 100.50;

   printf ("Address of 'a': %d Value of 'a': %d\n", b, *b);
   printf ("Address of 'x': %d Value of 'x': %f\n", y, *y);

   return 0;
}