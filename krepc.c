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
            count+=1;
        }
    }
    if(count>0)
    {
        printf("\nThe number %d is repeated %d times",k,count);
    }
    else
    {
        printf("\nThe number %d is not repeated");
    }
}
