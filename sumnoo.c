#include <stdio.h>

int main(void) {
	int s=0,a,b;
	printf("Enter the number");
	scanf("%d",&a);
	while(n>0)
	{
		b=a%10;
		s+=b;
		a=a/10;
	}
	printf("The sum is : %d",s);
	return 0;
}
