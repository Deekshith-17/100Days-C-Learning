#include <stdio.h>

int main(){

   auto int a = -28;
   static int b = 8;

   printf("The value of auto variable: %d\n", a);
   printf("The value of static variable b: %d\n",b);

   if(a != 0)
      printf("The sum of static variable and auto variable: %d\n",(b+a));
   
   return 0;
}