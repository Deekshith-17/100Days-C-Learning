#include<stdio.h>
int main()
{
    int p,t,r;
    float si;
    printf("Enter value of p:");
    scanf("%d",&p);
    printf("Enter value of t:");
    scanf("%d",&t);
    printf("Enter value of r:");
    scanf("%d",&r);
    si=(p*t*r)/100;
    printf("Simple intrest is:%f",si);
    return 0;
}