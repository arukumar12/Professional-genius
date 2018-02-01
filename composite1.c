#include <stdio.h>
void main()
{
int no,count=0,i;
printf("Enter the number:");
scanf("%d",&no);
for(i=2;i<no;i++)
{
if((no%i)==0)
{
count++;
}
}
if(count==0)
{
printf("No");
}
else
{
printf("Yes");
}
}
