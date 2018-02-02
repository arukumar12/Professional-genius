#include<stdio.h>
#include <string.h>
void main()
{
    int n,k,i,a[10],count=0,j;
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
        for(j=i+1;j<n;j++)
        {
            if(a[i]>a[j])
            {
                a[i]=a[i]+a[j];
                a[j]=a[i]-a[j];
                a[i]=a[i]-a[j];
            }
        }
    }
    for(i=0;i<k;i++)
    {
        if(i==k-1)
        {
            printf("The result is:%d",a[i]);
            break;
        }
    }
}
