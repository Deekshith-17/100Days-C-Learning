#include <stdio.h>

int main(){

   int number = 50;
   int *p; // Removed the obsolete 'far' keyword

   p = &number;
   
   // Changed to sizeof(p) to measure the pointer, and used %zu for correctness
   printf("Size of pointer: %zu bytes\n", sizeof(p));

   return 0;
}
