#include<stdio.h>
void main()
{
   int i,n,r,sum=0;
   printf("Enter the number");
   scanf("%d",&n);
   i=n;
   while(i!=0)
   {
       r=i%10;
       sum+=(r*r*r);
       i/=10;
       printf("The sum is %d\n",sum);
   }
   if(sum==n)
   {
       printf("The given number is a armstrong number");
   }
   else
   {
       printf("The given number is not an armstrong number");
   }
}
