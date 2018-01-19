#include<stdio.h>
#include<string.h>
void main()
{
    int m,n,t;
    printf("Enter the two numbers");
    scanf("%d%d",&m,&n);
    printf("\nBefore swapping the numbers are %d   %d",m,n);
    t=m;
    m=n;
    n=t;
    printf("\nAfter swapping the numbers are %d   %d",m,n);
}
