#include <stdio.h>

int main(){

   int arr[] = {10, 20, 30};
   int *ptr[3] = {&arr[0], &arr[1], &arr[2]};

   for (int i = 0; i < 3; i++){
      printf("ptr[%d]: address: %d value: %d\n", i, ptr[i], *ptr[i]);
   }
   
   return 0;
}