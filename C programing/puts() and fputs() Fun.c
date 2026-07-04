#include <stdio.h>
#include <string.h>

int main (){

   char name[20] = "Rakesh Sharma";

   printf("With puts(): \n");
   puts(name);

   printf("With fputs(): \n");
   fputs(name, stdout);

   return 0;
}