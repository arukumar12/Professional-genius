#include <stdio.h>
void main() {
	char in[100];
	scanf("%s",in);
	int i,u,v;
	u=in[0];
	if(u>91)
	{
		v=u-32;
		in[0]=v;
		
	}
	for(i=1;in[i]!='\0';i++)
	{
		if(in[i]==' ')
		{
			u=in[i+1];
			if(u>91)
			{
				v=u-32;
				in[i+1]=v;
			}	
		}
	}
	printf("%s",in);
