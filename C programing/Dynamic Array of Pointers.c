#include <stdio.h>

int main(){

   int *arr = (int *)malloc (sizeof (int) * 5); 

   for(int i = 0; i < 5; i++){
      arr[i] = i;
   }
   for (int x = 0; x < 5; x++){
      printf("%d %d\n", x, arr[x]);
   }
   
   return 0;
}