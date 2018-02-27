#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],t;
	int l,i;
	printf("Enter the sentence");
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	printf("\nThe string is: %s",a);
}
