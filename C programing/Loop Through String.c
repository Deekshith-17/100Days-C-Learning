#include <stdio.h>
#include <string.h>

int main (){

   char greeting[] = {'H', 'e', 'l', 'l', 'o', '\0'};

   for (int i = 0; i < 5; i++) {
      printf("%c", greeting[i]);
   }

   return 0;
}