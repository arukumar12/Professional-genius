#include<stdio.h>
void main()
{
int a,b,c,r;
printf("Enter the no:");
scanf("%d%d%d",&a,&b,&c);
r=(a*b)%c;
printf("The result is: %d",r);
}
