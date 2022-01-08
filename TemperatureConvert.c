//This program lets you convert temperature units from degree celsius to fahrenheit and vice-versa
#include<stdio.h>
int main()
{
    float c,f;
    int n;
    printf("\n1. Celsius to Fahrenheit\n2.Fahrenheit to Celcius\nEnter the Sl.No of the operation: ");
    scanf("%d",&n);

        if(n==1)
        {
        printf("Input the temperature in degrees Celsius: ");
        scanf("%f",&c);
         f=(c*(9/5))+32;
        printf("%g degrees Celsius is %g degree Fahrenheit.",c,f);
        }
        else if(n==2)
        {
        printf("Input the temperature in degrees Fahrenheit: ");
        scanf("%f",&f);
         c=5/9*(f-32);
        printf("%g degrees Fahrenheit is %g degrees Celsius.",f,c);
        }
    return 0;
}