#include <stdio.h>

int main(){

   char arr[] = "Character Pointers and Functions in C";
   char *ptr = arr;

   while(*ptr != '\0'){
      printf("%c", *ptr);
      ptr++;
   }
}