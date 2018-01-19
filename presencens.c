#include<stdio.h>
#include<string.h>
void main()
{
    char a[100];
    int n,i,x,y,z;
    printf("Enter the string");
    scanf("%s",&a);
    n=strlen(a);
    for(i=0;i<n;i++)
    {
        if((a[i]=='0')||(a[i]=='1')||(a[i]=='2')||(a[i]=='3')||(a[i]=='4')||(a[i]=='5')||(a[i]=='6')||(a[i]=='7')||(a[i]=='9')||(a[i]=='9'))
        {
            x=1;
        }
        if((a[i]=='a')||(a[i]=='b')||(a[i]=='c')||(a[i]=='d')||(a[i]=='e')||(a[i]=='f')||(a[i]=='g')||(a[i]=='h')||(a[i]=='i')||(a[i]=='j')||(a[i]=='k')||(a[i]=='l')||(a[i]=='m')||(a[i]=='n')||(a[i]=='o')||(a[i]=='p')||(a[i]=='q')||(a[i]=='r')||(a[i]=='s')||(a[i]=='t')||(a[i]=='u')||(a[i]=='v')||(a[i]=='w')||(a[i]=='x')||(a[i]=='y')||(a[i]=='z'))
        {
            y=1;
        }
    }
    z=x+y;
    if(z==2)
    {
        printf("There is a presence of both alphabet and numerics");
    }
    else
        printf("There is no presence of both alphabet and numberic");
}
