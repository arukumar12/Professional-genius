#include<stdio.h>
#include <string.h>
void main()
{
    int n,k,i,a[10],count=0;
    printf("Enter the number:");
    scanf("%d",&n);
    printf("Enter the search number:");
    scanf("%d",&k);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]%2==1)
        {
            count+=1;
        }
        if(count==k)
        {
            printf("The number is:%d",a[i]);
            break;
        }
    }
}
