#include <stdio.h>
#include <string.h>

int main(){

   char *s1 = "BASK";
   char *s2 = "BALL";

   int ret = strcmp(s1, s2);

   if (ret == 0)
      printf("Both strings are identical\n");
   else if (ret > 0)
      printf("The first string appears after the second string \n");
   else
      printf("The first string appears before the second string \n");

   return 0;
}