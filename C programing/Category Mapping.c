#include <stdio.h>

int main() {
   int marks = 87;  // Set the marks directly

   // Convert marks into categories (divide by 10)
   int category = marks / 10;

   // Handle ranges using switch
   switch(category) {
      case 10:   // For 100
      case 9:    // For 90-99
         printf("Excellent! Grade A\n");
         break;
      case 8:    // For 80-89
         printf("Very Good! Grade B\n");
         break;
      case 7:    // For 70-79
         printf("Good! Grade C\n");
         break;
      case 6:    // For 60-69
         printf("Satisfactory! Grade D\n");
         break;
      default:   // For below 60
         printf("Needs Improvement! Grade F\n");
   }
   return 0;
}