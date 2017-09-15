#include<stdio.h>
void main()
{
   int m=0,n=1,o,n,i;
   printf("Enter the limit");
   scanf("%d",&n);
   printf("The fibonacci series is....  %d\t%d\t",a,b);
   for(i=1;i<n;i++)
   {
   o=m+n;
   m=n;
   n=o;
   printf("%d\t",o);
   }
   printf("\n");
}
