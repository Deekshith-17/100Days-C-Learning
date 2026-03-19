#include <stdio.h>

int main() {
   int number = 7;  // You can change the value to test different cases

   switch (number) {
      case 1 ... 5:
         printf("The number is between 1 and 5.\n");
         break;
      case 6 ... 10:
         printf("The number is between 6 and 10.\n");
         break;
      default:
         printf("The number is outside the range 1 to 10.\n");
   }
   return 0;
}