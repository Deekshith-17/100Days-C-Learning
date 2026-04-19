#include <stdio.h>

int main(){

   int i, j;
   int x[4][4] = {
      {1, 2, 3, 4},
      {11, 22, 33, 44},
      {9, 99, 999, 9999},
      {10, 20, 30, 40}
   };

   // outer loop
   for (i=0; i<=3; i++){
   
      // inner loop
      for(j=0; j <= 3; j++){
         printf("%5d", x[i][j]);
      }
      printf("\n");
   }
   return 0;
}