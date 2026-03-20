#include <stdio.h>

int main() {
   int number = 17;  // Set the number directly

   // Normalize the number into a range
   int range;
   if (number >= 1 && number <= 10) {
      range = 1;  // Range 1-10
   } else if (number >= 11 && number <= 20) {
      range = 2;  // Range 11-20
   } else if (number >= 21 && number <= 30) {
      range = 3;  // Range 21-30
   } else {
      range = 4;  // Out of range
   }

   // Use switch to handle the different ranges
   switch(range) {
      case 1:
         printf("The number is between 1 and 10\n");
         break;
      case 2:
         printf("The number is between 11 and 20\n");
         break;
      case 3:
         printf("The number is between 21 and 30\n");
         break;
      default:
         printf("The number is out of range\n");
   }
   return 0;
}