#include <stdio.h>
void main()
{
    int r=0,s=0,i;
    for(i=0;i<=15;i++)
    {
        r+=i;
    }
    for(i=15;i<=45;i++)
    {
        s+=i;
    }
    printf("The different sums are %d and %d",r,s);
}
