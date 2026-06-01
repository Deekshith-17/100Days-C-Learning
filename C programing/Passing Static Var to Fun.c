#include <stdio.h>

int myfunction(int x);

int main(){

   static int x = 5;
   myfunction(x);
   printf("in main - x:%d\n", x);

   return 0;
}

int myfunction(int x){
   x++;
   printf("Incremented value of x: %d\n", x);
}