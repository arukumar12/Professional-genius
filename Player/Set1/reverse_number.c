#include<stdio.h>
void main()
{
    int n,r,sum=0;
    printf("Enter the number (integer) : ");
    scanf("%d",&n);
    if(n>0)
    {
        while(n>0)
        {
            r=n%10;
            sum=sum*10+r;
            n/=10;
        }
        printf("The reverse of the given number is %d",sum);
    }
    else
    {
        printf("Error - Enter an integer");
    }
}
