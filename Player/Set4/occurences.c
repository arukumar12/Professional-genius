#include<stdio.h>
#include<conio.h>
void main()
{
	int n,s,d,c=0;
	printf("Enter the number:");
	scanf("%d",&n);
	printf("Enter the find no:");
	scanf("%d",&s);
	while(n>0)
	{
		d=n%10;
		if(d==s)
		{
			c+=1;
		}
		n=n/10;
	}
	printf("The no. of occurences is: %d",c);
}
