#include <stdio.h>

int main() {
   int day = 5;
   printf("Day Number: %d\n", day);
   if (day == 1) {
      printf("Day Name: Monday\n");
   } else if (day == 2) {
      printf("Day Name: Tuesday\n");
   } else if (day == 3) {
      printf("Day Name: Wednesday\n");
   } else if (day == 4) {
      printf("Day Name: Thursday\n");
   } else if (day == 5) {
      printf("Day Name: Friday\n");
   } else if (day == 6) {
      printf("Day Name: Saturday\n");
   } else if (day == 7) {
      printf("Day Name: Sunday\n");
   } else {
      printf("Invalid day Number\n");
   }

   return 0;
}