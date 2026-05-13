#include <stdio.h>
#include <string.h>
#include <stdarg.h>

char * concat(int n, ...){
   va_list args;
   int i;
   static char string[100], *word;

   va_start (args, n);
   strcpy(string, "");
  
   for (i = 0; i < n; i++){
      word= va_arg (args, char *);
      strcat(string, word);
      strcat(string, " ");
   }

   va_end (args);

   return string;
}

int main(){

   char * string1 = concat(2, "Hello", "World");
   printf("%s\n", string1);
   char * string2 = concat(3, "How", "are", "you?");
   printf("%s\n", string2);

   return 0;
}