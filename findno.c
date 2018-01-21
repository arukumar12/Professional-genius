#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,l,r,i,flag=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the starting limit:");
    scanf("%d",&l);
    printf("Enter the ending limit:");
    scanf("%d",&r);
    for(i=l;i<=r;i++)
    {
        if(n==i)
        {
            flag=1;
        }
    }
    if(flag==1)
    {
        printf("Yes");
    }
    else
    {
        printf("No");
    }
    return 0;
}
