#include <stdio.h>

struct book{
   char title[10];
   double price;
   int pages;
};

int main(){

   struct book b[3];
   
   strcpy(b[0].title, "Learn C");
   b[0].price = 650.50;
   b[0].pages = 325;
   
   strcpy(b[1].title, "C Pointers");
   b[1].price = 175;
   b[1].pages = 225;
   
   strcpy(b[2].title, "C Pearls");
   b[2].price = 250;
   b[2].pages = 325;
   
   printf("\nList of Books:\n");
   for (int i = 0; i < 3; i++){
      printf("Title: %s \tPrice: %7.2lf \tPages: %d\n", b[i].title, b[i].price, b[i].pages);
   }
   
   return 0;
}