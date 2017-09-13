#include<stdio.h>
void main()
{
    int a=0,b=0,i;
    printf("Enter the Number");
    scanf("%d",a);
    for(i=0;i<=10;i++)
    {
        b=a*i;
        printf("%d X %d = %d\n",a,i,b);
    }
}
