#include<stdio.h>
void main()
{
    int n;
    printf("Enter the number");
    scanf("%d",&n);
    if((n>0)&&(n<=10))
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
}
