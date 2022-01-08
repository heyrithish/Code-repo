//This Program lets you find the greatest among three numbers
#include<stdio.h>
int main()
{
    int a,b,c,big;
    printf("\nInput the first number: ");
    scanf("%d",&a);
    printf("\nInput the second number: ");
    scanf("%d",&b);
    printf("\nInput the third number: ");
    scanf("%d",&c);
    big=(a>b)&&(a>c)?a:(b>c)?b:c;
    printf("\n%d is the greatest among the given input numbers.",big);
    return 0;
}