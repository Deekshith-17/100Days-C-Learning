#include <stdio.h>

int main() {
   char ch = 'G';  // Set the character directly

   // Switch-case with ranges
   switch (ch) {
      case 'a' ... 'z':  // Lowercase letters range
         printf("%c is a lowercase alphabet\n", ch);
         break;
      case 'A' ... 'Z':  // Uppercase letters range
         printf("%c is an uppercase alphabet\n", ch);
         break;
      case '0' ... '9':  // Digits range
         printf("%c is a digit\n", ch);
         break;
      default:
         printf("%c is a non-alphanumeric character\n", ch);
   }
   return 0;
}