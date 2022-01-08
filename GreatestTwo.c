//To find the greatest among two numbers
#include<stdio.h>
int main()
{
    int a,b;
    printf("\nInput the first number: ");
    scanf("%d",&a);
    printf("\nInput the second number: ");
    scanf("%d",&b);
    (a>b)?printf("\n%d is greater than %d",a,b):printf("\n%d is greater than %d",b,a);
    return 0;
}