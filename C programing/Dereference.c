#include <stdio.h>

int main(){

   float var1 = 10.55;
   float *floatptr = &var1;

   printf("var1: %f address of var1: %d\n",var1, &var1);
   printf("floatptr: %d address of floatptr: %d\n", floatptr, &floatptr);
   printf("var1: %f value at floatptr: %f", var1, *floatptr);

   return 0;
}