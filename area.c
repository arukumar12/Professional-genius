#include <stdio.h>

int main()
{
    float l,b,area;
    printf("Enter the length:");
    scanf("%f",&l);
    printf("Enter the breadth:");
    scanf("%f",&b);
    area=l*b;
    printf("The area is %.5f",area);

    return 0;
}
