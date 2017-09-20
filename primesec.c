#include<stdio.h>
void main()
{
int s,e,i,flag=0,x,c=0;
printf("enter the starting and ending interval");
scanf("%d%d",&s,&e);
for(i=s;i<=e;i++)
{
  for(x=2;x<i;x++)
    {
        if(i%x==0)
            {
            flag=1;
            }
    }
if(flag==0)
printf("%d",&i);
++c;
}
printf("The total number of prime numbers present in the given range is %d",c);
}
