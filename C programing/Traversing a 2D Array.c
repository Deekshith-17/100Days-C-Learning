#include <stdio.h>

int main(){

   // 2d array
   int arr[3][4] = {
      {1, 2, 3, 4},
      {5, 6, 7, 8},
   };

   int ROWS = 2, COLS = 4;
   int i, j;

   // pointer
   int (*ptr)[4] = arr;

   // print the element of the array via pointer ptr
   for (i = 0; i < ROWS; i++) {
      for (j = 0; j < COLS; j++) {
         printf("%d ", *(ptr[i]+j));
      }
      printf("\n");
   }
   
   return 0;
}