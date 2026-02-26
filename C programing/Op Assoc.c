#include <stdio.h>

int main(){

   int a = 20;
   int b = 10;
   int c = 15;
   int d = 5;
   
   int e;
   e = a + b * c / d;     
   printf("e : %d\n" ,  e );

   int f;

   f = (a + b) * c / d;     
   printf("f:  %d\n",  f);
  
   int g;
   g = (a + b) * (c / d);   
   printf("g: %d\n",  g );

   return 0;
}