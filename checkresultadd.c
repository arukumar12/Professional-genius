#include<stdio.h>
int main(void)
{
int m,n,s;
printf("Enter the two numbers:");
scanf("%d%d",&m,&n);
s=m+n;
if((m%2)==0)
{
    printf("The result is even");
}
else
{
    printf("The result is odd");
}
return 0;
}
