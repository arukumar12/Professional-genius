#include <stdio.h>

int main(void) {
	char a[10];
	int n;
	printf("Enter the input string");
	scanf("%s",a);
	printf("Enter the number of times that the string to be printed:");
	scanf("%d",&n);
	for(int i=0;i<n;i++)
	{
		printf("%s",a);
	}
	return 0;
}
