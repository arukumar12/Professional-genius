#include <stdio.h>

int main(void) {
	int sum=0,m,n;
	printf("Enter the number");
	scanf("%d",&n);
	while(n>0)
	{
		m=n%10;
		sum+=m;
		n=n/10;
	}
	printf("The sum is : %d",sum);
	return 0;
}
