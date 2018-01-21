#include<stdio.h>
#include<string.h>
int main(void)
{
char a[100],b[5]={'a','e','i','o','u'};
int i,j,flag=0,n;
printf("Enter the string:");
scanf("%s",&a);
n=strlen(a);
for(i=0;i<n;i++)
{
    for(j=0;j<5;j++)
    {
        if(a[i]==b[j])
        {
            flag=1;
            break;
        }
    }
}
if(flag==1)
{
    printf("The given string contains the vowels");
}
else
{
    printf("The given string does not contain any vowels");
}
return 0;
}
