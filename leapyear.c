#include<stdio.h>
void main()
{
    int y;
    printf("Enter the year");
    scanf("%d",&y);
    if((y%4)==0)
    {
        printf("The given year is a leap year");
    }
    else
    {
        printf("The given year is not a leap year");
    }
}
