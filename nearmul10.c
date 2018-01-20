#include<stdio.h>
#include<string.h>
int main(void)
{
    int n,q,r,s;
    printf("Enter the number:");
    scanf("%d",&n);
    q=n/10;
    r=n%10;
    s=q*10;
    if(r!=0)
    {
        s+=10;
    }
    printf("The nearest greater multiple of 10 is %d",s);
    return 0;
}
