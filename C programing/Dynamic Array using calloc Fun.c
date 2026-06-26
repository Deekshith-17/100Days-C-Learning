#include <stdio.h>
#include <stdlib.h>

int main() {
   int* ptr;
   int len;

   // Size of the array
   printf("Enter size of elements:");
   scanf("%d", &len);

   // use calloc
   ptr = (int*)calloc(len, sizeof(int));

   if (ptr == NULL) {
       printf("Memory not allocated.\n");
   }
   else {
      printf("Memory successfully allocated using "
               "calloc.\n");

      for (int i = 0; i < len; ++i) {
         ptr[i] = i + 1;
      }

      printf("The elements of the array are: ");
      for (int j = 0; j < len; ++j) {
         printf("%d, ", ptr[j]);
      }
   }
   return 0;
}