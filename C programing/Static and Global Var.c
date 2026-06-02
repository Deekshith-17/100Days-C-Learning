#include <stdio.h>

int myfunction();

static int x = 5;

int main(){
   myfunction(x);
   printf("Inside the main function, x: %d\n", x);
   return 0;
}

int myfunction(){
   x++;
   printf("Incremented value of x: %d\n", x);
}