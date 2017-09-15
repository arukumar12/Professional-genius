#include<stdio.h>
void main()
{
    int m,n,o;
    printf("Enter the three numbers");
    scanf("%d%d%d",&m,&n,&o);
    if (m>=n)
    {
        if(m>=o)
            printf("%d is the largest number",m);
        else
            printf("%d is the largest number",n);
    }
    else
    {
        if(n>=o)
            printf("%d is the largest number",n);
        else
            printf("%d is the largest number",o);
    }
}
