#include <stdio.h>
#include <conio.h>
#include <string.h>
void main() 
{


char a[10],b[10];
	
int i,j,k;
	
printf("Enter the two strings:");
	
scanf("%s%s",a,b);
	
i=strlen(a);
	
j=strlen(b);
k=strcmp(a,b);

if(!k)
	
{

printf("%s %s",a,b);
	
}
	
else
	
{
		
if(i>j)
		
{
		
printf("%s",a);
		
}
		
else
		
{
			
printf("%s",b);
		
}
	
}
getch();
	
}
