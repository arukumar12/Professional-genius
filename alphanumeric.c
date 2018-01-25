#include <stdio.h>
int main()
{
    char a[10];
    int i;
    printf("Enter the string:");
    scanf("%s",a);
    for(i=0;a[i]!='\0';i++)
    {
        if(isdigit(a[i]))
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
