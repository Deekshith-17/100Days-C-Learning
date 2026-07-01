#include <stdio.h>
#include <string.h>

int main (){

   char greeting[20];

   printf("Enter a string:\n");
   scanf("%s", greeting);

   printf("You entered: \n");
   printf("%s", greeting);

   return 0;
}