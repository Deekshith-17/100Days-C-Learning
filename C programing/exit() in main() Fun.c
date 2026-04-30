#include <stdio.h>
#include <stdlib.h>

int add(int, int);

int main (){
   int i;
   for ( i = 1; i<=5; i++){

      if ( i == 3 ){
         printf  (" \n exiting ..");
         exit(0);
      }
      else

      printf  (" \n Number is %d", i);
   }

   return 0;
}