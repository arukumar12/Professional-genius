#include<stdio.h>
#include<string.h>
void main()
{
char a[100];
int i,n=0;
printf("Enter the sentence : ");
scanf("%[^\n]s",&a);
for(i=0;a[i]!=NULL;i++)
{
if(a[i]==' ')
{
    ++n;
}
}
printf("The number of words in the given line is %d",n+1);
}
