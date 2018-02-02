#include<stdio.h>
#include <string.h>
void main()
{
    int n,r,c=0;
    printf("Enter the number:");
    scanf("%d",&n);
    do
    {
        r=n%10;
        c++;
        n=n/10;
    }while(n>0);
    printf("The digits present in the given number:%d",c);
}
