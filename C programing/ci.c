#include<stdio.h>
#include <math.h>
int main()
{
    float p,r,n;
    printf("Enter value of p:");
    scanf("%f",&p);
    printf("Enter value of r:");
    scanf("%f",&r);
    printf("Enter value of n:");
    scanf("%f",&n);
    float ci=p* pow(1+(r/100),n)-p;
    printf("Simple intrest is:%f",ci);
    return 0;
}