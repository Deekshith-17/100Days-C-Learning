#include <stdio.h>
#include <stdbool.h>

// Function to check prime number
bool isPrime(int num) {
   if (num <= 1) {
      return false;
   }
   for (int i = 2; i * i <= num; i++) {
      if (num % i == 0) {
         return false;
      }
   }
   return true;
}

int main() {
   int num = 5;

   // if...else if ladder
   if (num % 2 == 0 && isPrime(num)) {
      printf("%d is Even and Prime.\n", num);
   } else if (num % 2 != 0 && isPrime(num)) {
      printf("%d is Odd and Prime.\n", num);
   } else if (num % 2 == 0) {
      printf("%d is Even.\n", num);
   } else if (num % 2 != 0) {
      printf("%d is Odd.\n", num);
   } else {
      printf("Invalid input.\n");
   }

   return 0;
}