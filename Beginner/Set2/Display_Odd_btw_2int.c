#include <stdio.h>
void main()
{
int s,e,i;
printf("Enter the starting number");
scanf("%d",&s);
printf("Enter the ending number");
scanf("%d",&e);
printf("The list of odd numbers between %d and %d are:\n",s,e);
for(i=s;i<=e;i++)
{
if((i%2)!=0)
{
printf("%d\n",i);
}
}
}
