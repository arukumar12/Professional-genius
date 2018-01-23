#include<stdio.h>
void main()
{
    int n,i,a[10],sum=0;
    printf("Enter the total number of elements:");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        sum+=a[i];
    }
    printf("The sum is %d",sum);
}
