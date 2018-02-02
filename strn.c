#include<stdio.h>
#include<conio.h>
void main()
{
int n,i;
char a[10];
clrscr();
printf("Enter the position:");
scanf("%d",&n);
printf("Enter the string:");
scanf("%s",&a);
printf("The string is:");
for(i=0;i<n;i++)
{
printf("%c",a[i]);
}
getch();
}
