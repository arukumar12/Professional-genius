#include<stdio.h>
int main(void)
{
    int a,b,c;
    printf("Enter the numbers:");
    scanf("%d%d",&a,&b);
    c=a-b;
    if((c%2)==0)
    {
        printf("The given number is even");
    }
    else
    {
        printf("The given number is odd");
    }
    return 0;
}
