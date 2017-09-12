#include <stdio.h>
void main()
{
int n,ri=0,r,oi;
printf("Enter an integer: ");
scanf("%d", &n);
oi=n;
while( n!=0 )
{
r=n%10;
ri=ri*10+r;
n/=10;
}
if(oi==ri)
printf("%d is a palindrome",oi);
else
printf("%d is not a palindrome",oi);
}
