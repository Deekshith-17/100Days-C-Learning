#include <stdio.h>

/* global variable declaration */
int g = 10;

int function1();
int function2();

int main(){

   printf("Value of Global variable g = %d\n", g);
   
   function1();
   printf("Updated value of Global variable g = %d\n", g);
   
   function2();
   printf("Updated value of Global variable g = %d\n", g);
   
   return 0;
}

int function1(){
   g = g + 10;
   printf("New value of g in function1(): %d\n", g);
   return 0;
}

int function2(){  
   printf("The value of g in function2(): %d\n", g);
   g = g + 10;
   return 0;
}