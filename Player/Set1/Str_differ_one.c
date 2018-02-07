#include<stdio.h>
#include<conio.h>
#include<string.h>
void main()
{
    int m,n,i,j,z,e;
    char a[10],b[10];
    z=0;
    printf("Enter the first input string");
    scanf("%s",&a);
    printf("Enter the second input string");
    scanf("%s",&b);
    m=strlen(a);
    n=strlen(b);
    if(m>n)
        e=m;
    else
        e=n;
    for(i=0;i<e;i++)
    {
        if(a[i]!=b[i])
        {
            ++z;
        }
    }
    if(z==1)
        printf("yes");
    else
        printf("no");
}
