#include <stdio.h>

int main(){

   // Test the program with the values 1900, 2023, 2000, 2012
   int year = 1900; 
   printf("year: %d\n", year);
   
   // is divisible by 4?
   if (year % 4 == 0){
      
      // is divisible by 100?
      if (year % 100 == 0){
         
         // is divisible by 400?
         if(year % 400 == 0){
            printf("%d is a Leap Year\n", year);
         }
         else{
            printf("%d is not a Leap Year\n", year);
         }
      }
      else{
         printf("%d is not a Leap Year\n", year);
      }
   }
   else{
      printf("%d is a Leap Year\n", year);
   }
}