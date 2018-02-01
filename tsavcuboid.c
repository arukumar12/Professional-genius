#include <stdio.h>

int main()
{
int l,b,h,area,volume;
printf("Enter the length:");
scanf("%d",&l);
printf("Enter the breadth:");
scanf("%d",&b);
printf("Enter the height:");
scanf("%d",&h);
area=2*(l*b)+2*(b*h)+2*(l*h);
volume=l*b*h;
printf("\nThe TSA of cuboid is: %d",area);
printf("\nThe volume of cuboid is: %d",volume);
return 0;
}
