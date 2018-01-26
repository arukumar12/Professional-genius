#include<stdio.h>
int main()
{
    int i,flag=0;
    char ch[100];
    printf("Enter the String:");
    scanf("%s",&ch);
    for(i=0;ch[i]!='\0';i++)
    {
        if(ch[i]==ch[i+1])
            {
                flag=1;
                break;
            }
    }
    if(flag==1)
    {
        printf("The given string is not isogram");
    }
    else
    {
        printf("The given string is isogram");
    }
   return 0;
}
