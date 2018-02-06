#include <stdio.h>
#include <string.h>
int main()
{
 char a[100],c;
 int i,j,max=0,count=0;
 printf("Enter the string:");
 scanf("%s",a);
 for(i=0;i<strlen(a);i++)
    {
     for(j=0;j<strlen(a);j++)
        {
         if(i!=j&&a[i]==a[j])
            {
                count++;
                if(count>max)
                {
                    max=count;
                    c=a[i];
                }
            }
        }
    }
printf("%c",c);
}
