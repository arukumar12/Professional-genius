#include <stdio.h>
void main()
{
int s,e,i,j,n,count=0;
printf("Enter the starting number");
scanf("%d",&s);
printf("Enter the ending number");
scanf("%d",&e);
printf("The list of prime numbers between %d and %d are:\n",s,e);
for(i=s;i<=e;i++)
{
for(j=2;j<s;i++)
{
if((i%j)==0)
{
count=1;
}
}
if(count==0)
{
printf("%d",i);
}
}
}
