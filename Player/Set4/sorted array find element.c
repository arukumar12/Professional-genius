#include<stdio.h>
#include<conio.h>
void main()
{
	int n,k,a[10],i;
	printf("Enter the total number of elements:");
	scanf("%d",&n);
	printf("Enter the search element:");
	scanf("%d",&k);
	printf("Enter the sorted array elements:");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	for(i=0;i<n;i++)
	{
		if(a[i]==k)
		{
			printf("YES");
			break;
		}
		else
		{
			printf("NO");
			break;
		}
	}
}
