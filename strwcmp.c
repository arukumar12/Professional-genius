#include<stdio.h>
#include<string.h>
void main()
{
char a[100],b[100];
int i,j,len1,len2;
scanf("%s %s",a,b);
len1=strlen(a);
len2=strlen(b);
if(len1>len2)
{
    printf("%s",a);
}
else
{
    printf("%s",b);
}
}

