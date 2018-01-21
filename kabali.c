#include <stdio.h>

int main()
{
    int m[10],n[10],t,i;
    printf("Enter the total number of times:");
    scanf("%d",&t);
    printf("Enter the ninjas present in the two clans:\n");
    for(i=0;i<t;i++)
    {
        scanf("%d%d",&m[i],&n[i]);
    }
    printf("Difference of Ninjas:");
    for(i=0;i<t;i++)
    {
        printf("\n%d",n[i]-m[i]);
    }

    return 0;
}
