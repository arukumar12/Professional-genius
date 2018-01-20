#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100];
printf("Enter the sentence:");
gets(a);
int k,i,c=1;
for(i=0;i<k;i++)
{
if(a[i]==' ')
c++;
}
printf("The total number of words is %d",c);
return 0;
}
