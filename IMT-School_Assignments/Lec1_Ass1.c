#include <stdio.h>
void main(void)
{
	for (int i=0;i<6;i++) //This loop is for no. of rows
	{
		for (int j=6; j>i;j--) //This loop for the beginning space
		{
			printf(" ");
		}
		printf("*");
		for (int k=0;k<i;k++) // This loop for (*)
			
			{
              printf("**"); 
			}				
			printf("\n");
							
	}
	
}