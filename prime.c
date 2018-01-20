#include<stdio.h>
#include<string.h>
int main(void)
{
int i,n,c=0;
printf("Enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
    if((n%i)==0)
    {
        c+=1;
    }
}
if(c==2)
{
    printf("The given number is a prime number");
}
else
{
    printf("The given number is not a prime number");
}
return 0;
}
