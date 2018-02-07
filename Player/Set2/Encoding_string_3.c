#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],c[10];
    int n,i,b[10];
    printf("Enter the string:");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        b[i]=a[i];
        b[i]+=3;
        c[i]=b[i];
    }
    c[n]='\0';
    printf("The encoded string is: %s",c);
}
