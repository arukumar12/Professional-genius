#include<stdio.h>
#include<string.h>
void main()
{
    char a[50];
    int i,n;
    printf("Enter the string");
    scanf("%s",&a);
    n=strlen(a);
    printf("The reverse of the given string is : ");
    for(i=n-1;i>=0;i--)
    {
        printf("%s",a[i]);
    }
}
