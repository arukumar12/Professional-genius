#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],n,i;
clrscr();
printf("Enter the total number:");
scanf("%d",&n);
printf("Enter the array of numbers:");
for(i=0;i<n;i++)
{
scanf("%d",&a[i]);
}
printf("The result (%2) are:");
for(i=0;i<n;i++)
{
if(a[i]%2==0)
{
printf("\n%d",a[i]/2);
}
else
{
printf("\n%d",a[i]);
}
}
getch();
}
