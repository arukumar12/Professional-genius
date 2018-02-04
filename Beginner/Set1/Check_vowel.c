#include<stdio.h>
void main()
{
char dy;
int i;
printf("Enter the character");
scanf("%c",&dy);
if((dy=='a')||(dy=='e')||(dy=='i')||(dy=='o')||(dy=='u')||(dy=='A')||(dy=='E')||(dy=='I')||(dy=='O')||(dy=='U'))
{
    printf("The given character is a vowel");
}
else
{
    printf("The given character is a consonant");
}
}
