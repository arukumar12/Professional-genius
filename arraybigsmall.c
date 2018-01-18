#include<stdio.h>
void main()
{
    int a[10],n,i,j,t;
    printf("Enter the number");
    scanf("%d",&n);
    printf("Enter the array numbers");
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
                t=a[i];
                a[i]=a[j];
                a[j]=t;
            }
        }
    }
    printf("\nThe smallest number is %d",a[0]);
    printf("\nThe largest number is %d",a[n-1]);
}
