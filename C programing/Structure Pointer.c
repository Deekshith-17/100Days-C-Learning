#include <stdio.h>

struct book{
   char title[10];
   double price;
   int pages;
};

int main (){

   struct book b1 = {"Learn C", 650.50, 325};
   struct book *ptr = &b1;

   printf("With -> Operator: \n");
   printf("Title: %s \nPrice: %7.2lf \nNumber of Pages: %d\n\n", ptr->title, ptr->price, ptr->pages);

   printf("With . Operator:\n");
   printf("Title: %s \nPrice: %7.2lf \nNumber of Pages: %d\n", b1.title, b1.price, b1.pages);

   return 0;
}