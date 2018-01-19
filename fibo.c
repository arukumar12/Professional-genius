#include<stdio.h>
#include<string.h>
void main()
{
    int a=0,b=1,c,n,i;
    printf("Enter the limit");
    scanf("%d",&n);
    printf("The fibonacci series");
    printf("\n %d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
}
