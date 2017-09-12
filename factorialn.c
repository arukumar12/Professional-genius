#include<stdio.h>
void main()
{
    int in,no;
    printf("Enter the value of n");
    scanf("%d",&no);
    in=fact(no);
    printf("The factorial of a given number %d is : %d",no,in);
}
int fact(int no)
{
    if(no==0)
    {
        return 1;
    }
    else
    {
        return no*fact(no-1);
    }
}
