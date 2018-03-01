#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
	int l,i;
	char a[10];
	printf("Enter the string: ");
	scanf("%s",&a);
	l=strlen(a);
	for(i=0;i<l;i++)
	{
		if((i==0)||(i==3))
		{
			printf("%c",a[i]);
		}
	}
}
