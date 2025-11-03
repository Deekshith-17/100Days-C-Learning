#include<stdio.h>
int main()
{
    int f;
    float c;
    printf("Enter far value:");
    scanf("%d",&f);
    c=((f-32)*5)/9;
    printf("Celsius Value:%f",c);
    return 0;
}