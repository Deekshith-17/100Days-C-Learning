#include <stdio.h>

int main(){

   int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
   int y = sizeof(arr)/sizeof(int);

   printf("No of elements in arr: %d\n", y);
}