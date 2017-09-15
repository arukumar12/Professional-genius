#include<stdio.h>
void main()
{
   int a[10],i,j,n,t;
   printf("Enter the total number of elements ( limit = 10 ) : ");
   scanf("%d",&n);
   for(i=0;i<n;i++)
   {
        scanf("%d",&a[i]);
   }
   for(i=0;i<n-1;i++)
   {
       for(j=i+1;j<n;j++)
       {
           if(a[i]>a[j])
           {
               t=a[i];
               a[i]=a[j];
               a[j]=t;
           }
       }
   }
   printf("The greatest element among the given number is %d",a[n-1]);
}
