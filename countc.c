#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,n=0;
printf("Enter the sentence");
scanf("%s",&a);
for(i=0;a[i]!=NULL;i++)
{
n+=1;
}
printf("The number of characters in the given line is %d",n);
}
