#include<stdio.h>
#include<conio.h>
void main()
{
char a[10],b[10];
int i,n,l1,l2,c=0;
clrscr();
printf("Enter the two strings:");
scanf("%s%s",&a,&b);
printf("Enter the different no.");
scanf("%d",&n);
l1=strlen(a);
l2=strlen(b);
if(l1==l2)
{
for(i=0;i<l1;i++)
{
if(a[i]!=b[i])
{
c+=1;
}
}
if(c==n)
{
printf("Yes");
}
else
{
printf("No");
}
}
else
{
printf("The given two strings are not equal length");
}
getch();
}
