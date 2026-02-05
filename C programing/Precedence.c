#include <stdio.h>

int main(){

   int x = 5, z;

   printf("x: %d \n", x);

   z = x++;
   printf("x: %d z: %d\n", x, z);

   return 0;
}