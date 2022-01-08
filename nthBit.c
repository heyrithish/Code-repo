#include<stdio.h>
int main()
{
    int n,b,i;
    printf("\nEnter any number: ");
    scanf("%d",&n);
    printf("\nEnter the number of bit to be found: ");
    scanf("%d",&i);
    b=n<<(i-1)&&1;
    printf("The %dth bit of %d is %d.",i,n,b);
    return 0;
}
