#include<stdio.h>
void main()
{
float si,r,p,n;
printf("\nEnter the simple interest:");
scanf("%f",&si);
printf("Enter the rate of interest:");
scanf("%f",&r);
printf("Enter the no. of years:");
scanf("%f",&n);
p=((si*n*r)/100);
printf("The principal value is %.2f",p);
}
