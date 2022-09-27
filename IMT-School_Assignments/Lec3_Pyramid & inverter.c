#include <stdio.h>
void main (void)
{int i,j,k;
	for(i=0;i<8;i++) //rows
	{
	for(j=8;j>i;j--) //spaces
	{ printf(" ");}
		printf("*");
	for(k=0;k<i;k++) //"*"
	{printf("**");
	}	
	printf("\n");
	}	
	printf("\n");
 for(i=0;i<8;i++)
 { 
     for(j=0;j<i+1;j++)
	 { printf(" ");}
	 printf("*");
	 for(k=7;k>i;k--)
	 {printf("**");
	}	
	
	printf("\n");
}	

 } 