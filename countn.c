#include<stdio.h>
void main()
{
    int m,n,o=0;
    printf("Enter the number");
    scanf("%d",&n);
    while(n>0)
    {
        m=n%10;
        o++;
        n=n/10;
    }
    printf("The total number of digits is %d",o);
}
