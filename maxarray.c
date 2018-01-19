#include<stdio.h>
#include<string.h>
void main()
{
    int a[10],n,i,t;
    printf("Enter the count");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(i=0;i<n;i++)
    {
        if(a[i]>a[i+1])
        {
            t=a[i];
            a[i]=a[i+1];
            a[i+1]=t;
        }
    }
    printf("The largest number is %d",a[n-1]);
}
