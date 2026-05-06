#include <stdio.h>

int main(){

   auto int nested();
   nested();

   printf("In Main Function now\n");

   int nested(){
      printf("In the nested function now\n");
   }

   printf("End of the program");
}