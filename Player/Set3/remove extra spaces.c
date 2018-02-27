#include<stdio.h>
#include<conio.h>
void main()
{
	char a[100],t;
	int l,i,flag=0;
	clrscr();
	printf("Enter the sentence");
	scanf("%[^\n]s",a);
	l=strlen(a);
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			flag+=1;
		}
	}
	while(flag>1)
	{
	for(i=0;a[i]!='\0';i++)
	{
		if(a[i]==' ')
		{
			t=a[i];
			a[i]=a[i+1];
			a[i+1]=t;
		}
	}
	flag--;
	}
	printf("\nThe string is: %s",a);
	getch();
}
