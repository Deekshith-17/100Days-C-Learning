#include <stdio.h>

// function prototype
int sum(int a, int b); 

int main() {
   int a = 10, b = 20; 
   printf("Sum of a and b is %d\n", sum(a, b));
   return 0;
}

// function definition
int sum (int x , int y){
   return x + y; 
}