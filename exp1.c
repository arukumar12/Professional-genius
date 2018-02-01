#include<stdio.h>
void main()
{
int a,b,c,ro;
printf("Enter the no:");
scanf("%d%d%d",&a,&b,&c);
ro=(a*b)%c;
printf("The result is: %d",ro);
}
