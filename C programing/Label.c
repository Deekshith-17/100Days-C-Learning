#include <stdio.h>
int main()
{
   int x=0;
   begin:
   x++;
   if (x>=10)
      goto end;
   printf("%d\n", x);
   goto begin;

   end:
      return 0;
}