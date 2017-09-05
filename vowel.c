#include<stdio.h>
void main()
{
char a[4]={'a','e','i','o','u'};
char b;
printf("Enter the character");
scanf("%c",b);
for(int i=0;i<4;i++)
{
if(a[i]==b)
{
printf("The given character is a vowel");
}
else
{
printf("The given character is a consonanat");
}
}
}
