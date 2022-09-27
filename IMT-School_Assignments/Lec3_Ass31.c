#include <stdio.h>
void main (void)
{int i,j,k;
	for(i=0;i<4;i++) //rows
	{
	for(j=4;j>i;j--) //spaces
	{ printf(" ");}
		printf("*");
	for(k=0;k<i;k++) //"*"
	{printf("**");
	}	
	printf("\n");
	}
}		