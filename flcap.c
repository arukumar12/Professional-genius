#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char a[20];
clrscr();
printf("Enter the string:");
scanf("%[^\n]%*c",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
if(a[i]==' ')
{
a[i+1]-=32;
}
}
a[0]-=32;
printf("The changed string is:%s",a);
getch();
}
