#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int i,l,b[100];
clrscr();
printf("Enter the string or sentence:");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
b[i]=a[i];
}
for(i=0;i<l;i++)
{
if((b[i]>=97)&&(b[i]<=122))
{
b[i]=b[i]-32;
a[i]=b[i];
}
else if((b[i]>=65)&&(b[i]<=90))
{
b[i]=b[i]+32;
a[i]=b[i];
}
}
printf("The output string is: %s",a);
getch();
}
