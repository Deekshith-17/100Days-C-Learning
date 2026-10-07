#include <stdio.h>
#include <string.h>

int main(){

   char *ptr = "How are you doing?";
   char *ptr1;

   strcpy(ptr1, ptr);
   printf("%s", ptr1);

   return 0;
}