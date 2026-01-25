#include <stdio.h>

int main(){

   int a = 60;	/* 60 = 0011 1100 */
   int c = 0;

   c = ~a;      /* -61 = 1100 0011 */

   printf("Value of c is %d \n", c);

   return 0;
}