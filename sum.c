#include <stdio.h>
void main()
{
    int i,n,sum=0;
    printf("Enter the number");
    scanf("%d",&n);
    for(i=n;i>0;i--)
    {
        sum+=i;
    }
    printf("The sum is %d",sum);
}
