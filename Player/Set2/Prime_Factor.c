#include<stdio.h>
int prime(int);
void main()
{
int n,a[10],j=0,i,k=0,c;
printf("Enter the number:");
scanf("%d",&n);
for(i=2;i<n;i++)
{
if(n%i==0)
{
a[j++]=i;
}
k=j;
}
printf("The numbers are: ");
for(i=0;i<k;i++)
{
c=0;
for(j=2;j<=a[i]/2;++j)
{
if(a[i]%j==0)
{
c=1;
break;
}
}
if(c==0)
{
printf("%d ",a[i]);
}
}
}
