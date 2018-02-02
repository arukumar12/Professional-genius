#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,r;
clrscr();
printf("Enter the numbers:");
scanf("%d%d%d",&a,&b,&c);
r=a+(c-1)*b;
printf("The result is:%d",r);
getch();
}
