#include<stdio.h>
void main()
{
int i,n,sum=0;
printf("Enter the limit of the number");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
sum+=i;
}
printf("The sum is %d",sum);
}
