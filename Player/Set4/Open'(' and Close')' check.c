#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
char a[100];
int o=0,c=0,i,l,d;
clrscr();
printf("Enter the string that contains only ')' and '(': ");
scanf("%s",&a);
l=strlen(a);
for(i=0;i<l;i++)
{
if(a[i]=='(')
{
o++;
}
else if(a[i]==')')
{
c++;
}
}
d=o-c;
if(d==0)
{
printf("Yes");
}
else
{
printf("No");
}
getch();
}
