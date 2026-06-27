#include <stdio.h>
#include <stdlib.h>

int main() {
   int* ptr;
   int len = 5;

   //  Memory allocates dynamically using calloc()
   ptr = (int*)calloc(len, sizeof(int));

   if (ptr == NULL) {
      printf("Memory not allocated.\n");
      exit(0);
   }
   else {
      printf("Memory successfully allocated using "
              "calloc.\n");
   }

   for (int i = 0; i < len; ++i) {
      ptr[i] = i + 1;
   }

   printf("The elements of the array are: ");
   for (int j = 0; j < len; ++j) {
      printf("%d, ", ptr[j]);
   }

   printf("\n");

   len = 10;

   int *temp = ptr;

   //  using realloc
   ptr = realloc(ptr, len * sizeof(int));
   if (!ptr) {
      printf("Memory Re-allocation failed.");
      ptr = temp;
   }
   else {
      printf("Memory successfully re-allocated using realloc.\n");
   }

   // inserting new elements
   for (int i = 5; i < len; ++i) {
      ptr[i] = i + 10;
   }

   printf("The new elements of the array are: ");
   for (int j = 0; j < len; ++j) {
      printf("%d, ", ptr[j]);
   }
   return 0;
}