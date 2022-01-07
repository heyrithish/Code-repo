//To find ncr
#include<stdio.h>
int main()
{
    int n,r,ncr,nr,i,j,k,fact_n,fact_r,fact_nr;
    printf("Give inputs for n and r: ");
    scanf("%d%d",&n,&r);
    for(i=1;i<=n;i++)
    {
       fact_n*=i;
    }
    for(j=1;j<=r;j++)
    {
        fact_r*=j;
    }
    for(k=1;k<=(n-r);k++)
    {
        fact_nr*=k;
    }
    ncr=fact_n/(fact_r*fact_nr);
    printf("The NCR for n=%d and r=%d is %d",n,r,nr);
    return 0;
}
