#include <stdio.h>
#include <stdarg.h>

// Variadic function to add numbers
int largest(int n, ...){
   va_list args;
   int i, max = 0;

   va_start (args, n);

   for(i = 0; i < n; i++){
      int x = va_arg (args, int);
         if (x >= max)
            max = x;
   }

   va_end (args);
   return max;
}

int main(){

   printf("Largest number in the list = %d ", largest(5, 12, 34, 21, 45, 32));

   return 0;
}