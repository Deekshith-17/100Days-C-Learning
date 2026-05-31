#include <stdio.h>

int counter();

int main(){
   counter();
   counter();
   counter();
   return 0;
}

int counter(){
   static int x = 0;
   printf("Value of x as it enters the function: %d\n", x);
   x++;
   printf("Incremented value of x: %d\n", x);
}