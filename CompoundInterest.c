//To find the compound interest of given loan details
#include<stdio.h>
#include<math.h>
int main()
{
    float p,t,r,i;
    printf("Amount of Principle amount: ");
    scanf("%f",&p);
    //Amount entered is in INR
    printf("Time period: ");
    scanf("%f",&t);
    //Time period is in years
    printf("Rate of interest: ");
    scanf("%f",&r);
    //Rate of interest is in percentage(%)
    i=p*(pow(1+r, t));
    printf("\nThe compound interest formed over %g years is %g.\nTotal amount to be paid at the end is %g.",t,i,(i+p));
    return 0;
    
}
