#include<stdio.h>
void main(){
int i,j;
printf("Enter the first number ");
scanf("%d",&i);
printf("Enter the second number ");
scanf("%d",&j);
printf("Before swapping %d\t%d\n4",i,j);
i=i^j;
j=i^j;
i=i^j;
printf("After swapping %d\t%d",i,j);
}
