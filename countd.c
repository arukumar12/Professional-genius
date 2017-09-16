#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int l,i,digit=0;
    printf("Enter the string : ");
    scanf("%s",&a);
    l=strlen(a);
    for(i=0;i<l;i++)
    {
        if((a[i]=='0')||(a[i]=='1')||(a[i]=='2')||(a[i]=='3')||(a[i]=='4')||(a[i]=='5')||(a[i]=='6')||(a[i]=='7')||(a[i]=='8')||(a[i]=='9'))
        {
            ++digit;
        }
    }
    printf("The total number of digits present in the given string is : %d",digit);
}
