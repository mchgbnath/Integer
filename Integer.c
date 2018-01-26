#include<stdio.h>
void main()
{
    int z[1000],i,j,n,s,sum=0;
    printf("Enter the number of terms:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
    printf("Enter the number:");
    scanf("%d",&z[i]);
    }
    printf("Enter the number of terms to get sum:");
    scanf("%d",&j);
    for(s=0;s<j;s++)
    sum=sum+z[s];
    printf("The sum of %d numbers is:%d",j,sum);

}
