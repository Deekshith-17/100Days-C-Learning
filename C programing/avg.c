#include<stdio.h>
int main()
{
    int num1,num2,num3,sum,avg;
    printf("Enter the Num1:");
    scanf("%d",&num1);
    printf("Enter the Num2:");
    scanf("%d",&num2);
    printf("Enter the Num3:");
    scanf("%d",&num3);
    sum=num1+num2+num3;
    avg=sum/3;
    printf("Average of number is: %d",avg);
    return 0;
}