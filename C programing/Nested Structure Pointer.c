#include <stdio.h>
#include <string.h>

struct employee{
   char name[10];
   float salary;

   struct dob {
      int d, m, y;
   } d1;
};

int main(){

   struct employee e1 = {"Arjun", 45000, {12, 5, 1990}};
   struct employee *ptr = &e1;

   printf("Name: %s\n", ptr->name);
   printf("Salary: %f\n", ptr->salary);
   printf("Date of Birth: %d-%d-%d\n", ptr->d1.d, ptr->d1.m, ptr->d1.y);

   return 0;
}