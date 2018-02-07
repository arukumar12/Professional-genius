#include<stdio.h>
void main()
{
    int i,n;
    printf("Enter the value of n");
    scanf("%d",&n);
    i=fact(n);
    printf("The factorial of a given number %d is : %d",n,i);
}
int fact(int n)
{
    if(n==0)
    {
        return 1;
    }
    else
    {
        return n*fact(n-1);
    }
}
