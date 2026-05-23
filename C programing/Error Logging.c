#include <stdio.h>

#define LOG_ERROR(msg) \
   printf("Error in function %s: %s\n", __func__, msg)

void displayData(int x) {
   if (x < 0) {
      LOG_ERROR("Negative value not allowed");
      return;
   }
   printf("Processing value: %d\n", x);
}

int main() {
   displayData(10);
   displayData(-5);
   return 0;
}