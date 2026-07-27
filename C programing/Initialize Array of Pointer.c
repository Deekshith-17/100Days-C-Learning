#include <stdio.h>

int main(){

   static int *ptr[5];

   for (int i = 0; i < 5; i++){
      printf("ptr[%d] = %d\n", i, ptr[i]); 
   }
   
   return 0;
}