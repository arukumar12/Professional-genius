#include<stdio.h>
#include<conio.h>
void main()
{
int a[10],i,j;
clrscr();
printf("Enter the array values:");
for(i=0;i<10;i++)
{
scanf("%d",&a[i]);
}
for(i=0;i<10;i++)
{
for(j=i+1;j<10;j++)
{
if(a[i]>a[j])
{
a[i]=a[i]+a[j];
a[j]=a[i]-a[j];
a[i]=a[i]-a[j];
}
}
}
printf("The minimum element is:%d",a[0]);
getch();
}
