#include<stdio.h>
#include<string.h>
void main()
{
    char a[10],b[10],c[10];
    int i,n,j=0,k;
    printf("Enter the string:");
    scanf("%s",a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='a')||(a[i]=='e')||(a[i]=='i')||(a[i]=='o')||(a[i]=='u')||(a[i]=='A')||(a[i]=='E')||(a[i]=='I')||(a[i]=='O')||(a[i]=='U'))
            {
                a[i]='\0';
            }
    }
    for(i=0;i<n;i++)
    {
        if(a[i]!='\0')
        {
            b[j]=a[i];
            j++;
        }
    }
    for(k=0,i=j;i>=0;i--,k++)
    {
        c[k]=b[i];
    }
    printf("The reversed string is : %s",c);
}
