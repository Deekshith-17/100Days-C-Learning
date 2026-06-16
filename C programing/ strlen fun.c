#include <stdio.h>
#include <string.h>
int compare( char *, char *);
int main() {
   char  a[] = "BAT";
   char  b[] = "BALL";
   int ret = compare(a, b);
   return 0;
}
int compare (char *x, char *y){
   int val;
   if (strlen(x)>strlen(y)){
      printf("length of string a is greater than or equal to length of string b");
   }
   else{
      printf("length of string a is less than length of string b");
   }
}