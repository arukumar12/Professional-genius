#include<stdio.h>
void main()
{
   int a=0,b=1,c,n,i;
   printf("Enter the limit");
   scanf("%d",&n);
   printf("The fibonacci series is....  %d\t%d\t",a,b);
   for(i=1;i<n;i++)
   {
   c=a+b;
   a=b;
   b=c;
   printf("%d\t",c);
   }
   printf("\n");
}
