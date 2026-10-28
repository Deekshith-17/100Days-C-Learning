#include <stdio.h>

int main(){

   int number=50;
   int far *p;

   p = &number;
   printf("Size of far pointer: %d bytes", sizeof(number));

   return 0;
}