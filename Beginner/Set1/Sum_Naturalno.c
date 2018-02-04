#include<stdio.h>
void main()
{
   int i,n,sum=0;
   printf("Enter the limit : ");
   scanf("%d",&n);
   for(i=1;i<=n;i++)
   {
       sum+=i;
   }
   printf("The sum of natural numbers is %d",sum);
}
