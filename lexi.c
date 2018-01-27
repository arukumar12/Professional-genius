#include<stdio.h>
#include <string.h>
void main()
{
    int i,j,n;
    char s[20][50],t[50];
    printf("Enter the no. of words:");
    scanf("%d",&n);
    for(i=0;i<n;++i)
        scanf("%s[^\n]",s[i]);
    for(i=0;i<n-1;++i)
        for(j=i+1;j<n;++j)
        {
            if(strcmp(s[i],s[j])>0)
            {
                strcpy(t,s[i]);
                strcpy(s[i],s[j]);
                strcpy(s[j],t);
            }
        }
    printf("\nIn lexicographical order: \n");
    for(i=0;i<n;++i)
    {
        puts(s[i]);
    }
}
