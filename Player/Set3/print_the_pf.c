#include<stdio.h>
#include<conio.h>
void main()
{
int n1,n2,i,a[10],j=0,c;
clrscr();
printf("Enter the starting limit:");
scanf("%d",&n1);
printf("Enter the ending limit:");
scanf("%d",&n2);
for(i=1;i<=n2;i++)
{
if((i*i)<=n2)
{
a[j++]=i*i;
c=j;
}
else
{
break;
}
}
printf("The elements are:");
for(i=0;i<c;i++)
{
printf("%d  ",a[i]);
}
getch();
}
