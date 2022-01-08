//This program lets you print the right most digit in th eintegral point of a floating point
#include<stdio.h>
int main()
{
    float n;
    int r;
    printf("Input any floating value: ");
    scanf("%f",&n);
    r=(int)n%10;
    printf("The right most digit of the integral part of a floating value %f is %d.",n,r);
    return 0;


}