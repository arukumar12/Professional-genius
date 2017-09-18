#include<stdio.h>
#include<stdlib.h>
void main()
{
int n;
char no[123];
printf("enter the number ");
gets(no);
n=atoi(no);
printf("the number in after conversion from string to int is %d",n);
}
