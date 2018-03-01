#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l,i,count=0;
	char a[10];
	printf("Enter the string (only '(' and ')'): ");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<=l;i++)
	{
		if(count>=0)
		{
			if(a[0]==')')
			{
				printf("NO");
				break;
			}
			if(a[i]=='(')
			{
				count+=1;
			}
			if(a[i]==')')
			{
				count-=1;
			}
		}
		else
		{
			printf("NO");
			break;
		}
	}
	if((a[0]!=')')&&(count==0))
	{
		printf("YES");
	}
	else
	{
		printf("NO");
	}
}
