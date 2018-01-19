#include <stdio.h>

int main(void) {
	int n;
	printf("Enter the number");
	scanf("%d",&n);
	if((n%2)==0)
	{
		printf("%d",n);
	}
	if((n%2)==1)
	{
		printf("%d",n-1);
	}
	return 0;
}
