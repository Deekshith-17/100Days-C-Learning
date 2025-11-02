#include<stdio.h>
int main()
{
    int a,b,temp;
    printf("Enter a value:");
    scanf("%d",&a);
    printf("Enter b value:");
    scanf("%d",&b);
    printf("Before swapping value of a and b is %d and %d",a,b);
    temp=a;
    a=b;
    b=temp;
    printf("\nAfter swapping value of a and b is %d and %d",a,b);
    return 0;
}