#include <stdio.h>

int main() {
  // Declare two variables
  char x = 'P';
  char arr[] = "TutorialsPoint";

  // Declaring character pointers
  char *ptr_x = &x;
  char *ptr_arr = arr;

  // Printing values
  printf("Value of x : %c\n", *ptr_x);
  printf("Value of arr: %s\n", ptr_arr);
  
  return 0;
}