#include <stdio.h>
int main() {
    int i,l,k;
	char a[10];
	char b[10];
	scanf("%s%s",a,b);
	l=strlen(a);
	k=strlen(b);
       if(l>k)
	{
	    printf("%s",a);
	}
	else
	{
	    printf("%s",b);
	}
	return 0;
}
