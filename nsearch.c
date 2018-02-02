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
        if(a[i]==k)
        {
            count=1;
        }
    }
    if(count==1)
    {
        printf("\nYes");
    }
    else
    {
        printf("\nNo");
    }
}
