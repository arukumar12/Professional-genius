#include <stdio.h>

int main(void) {
	int m,n,r;
	int sum=0;
	printf("Enter the number");
	scanf("%d",&n);
	m=n;
	while(n>0)
	{
		r=n%10;
		sum=sum+r*r;
		n=n/10;
	}
	printf("The square of the given number %d is %d",m,sum);
	return 0;
}
