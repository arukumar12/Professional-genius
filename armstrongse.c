#include<stdio.h>
void main()
{
   int s,e,i,n,r,sum=0;
   printf("Enter the starting number");
   scanf("%d",&s);
   printf("Enter the ending number");
   scanf("%d",&e);
   printf("The following are the armstrong numbers present in the given intervals");
   for(n=s;n<=e;n++)
   {
   i=n;
   while(i!=0)
   {
       r=i%10;
       sum+=(r*r*r);
       i/=10;
   }
   if(sum==n)
   {
       printf("%d\n",n);
   }
   }
}
