#include<stdio.h>
int main()
{
    int a,b;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("Before swapping value of a and b is %d and %d",a,b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("\nAfter swapping value of a and b is %d and %d",a,b);
    return 0;
}