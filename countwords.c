#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100];
printf("Enter the sentence:");
scanf("%[^\n]%*c",a);
int k,i,c=1;
for(i=0;a[i]!='\0';i++)
{
if(a[i]==' ')
c++;
}
printf("The total number of words is %d",c);
return 0;
}
