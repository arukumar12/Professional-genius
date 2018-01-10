#include <stdio.h>
 
int main(void) {
	char a[10];
	printf("Enter the day");
	scanf("%s",&a);
	if((a=="monday")||(a=="MONDAY")||(a=="TUESDAY")||(a=="tuesday")||(a=="wednesday")||(a=="WEDNESDAY")||(a=="THURSDAY")||(a=="thursday")||(a=="friday")||(a=="FRIDAY")||)
	{
		printf("No");
	}
	if((a=="sunday")||(a=="SUNDAY")||(a=="saturday")||(a=="SATURDAY")||)
	{
		printf("Yes");
	}
	return 0;
}
