#include<stdio.h>
int main()
{
    char a[100];
    int i;
    printf("Enter the string");
    scanf("%s",a);
    printf("\n Odd:");
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2 == 0)
        {
            printf("%c",a[i]);
        }
    }
    printf("\n Even:");
    for(i=0;a[i]!='\0';i++)
    {
        if(i%2 == 1)
        {
            printf("%c",a[i]);
        }
    }
    return 0;
}
