#include <stdio.h>
 
int main(){

   // local variable definition
   char a = 'a';

   // while loop execution
   while(a <= 'z') {
      printf("%c", a);
      a++;
   }
   printf("\n End of loop"); 
   return 0;
}