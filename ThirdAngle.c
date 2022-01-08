//To find the thirs angle in a triangle
#include<stdio.h>
int main()
{
    float a1,a2,a3;
    //All input angles must be entered in degrees
    printf("\nEnter the value of Angle 1: ");
    scanf("%f",&a1);
    printf("\nEnter the value of Angle 2: ");
    scanf("%f",&a2);
    a3=180-a1-a2;
    printf("\nThe third angle in a triangle when two given angles are %g and %g is %g.",a1,a2,a3);
    return 0;
}