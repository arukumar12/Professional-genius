#include<stdio.h>
#include<string.h>
#include<conio.h>
void main()
{
char a[100],b[100];
int i=0,j,len1,len2,tot;
clrscr();
scanf("%s %s",a,b);
len1=strlen(a);
len2=strlen(b);
tot=len1+len2;
for(i=len1;i<tot;)
{
for(j=0;j<len2;j++)
{
a[i]=b[j];
i++;
}
}
for(i=0;i<tot;i++)
printf("%c",a[i]);
getch();
}
