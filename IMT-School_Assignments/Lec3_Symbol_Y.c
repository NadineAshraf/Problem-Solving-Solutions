#include <stdio.h>
void main(void)
{int i,j,k;
	 for(i=0;i<3;i++) //rows
	 { for(j=0;j<i+1;j++) //spaces
	 {		printf(" "); }
				 	 
     printf("**");
	 for(k=3;k>i;k--)
	 { printf("  ");
	 }
	  printf("**");
	  printf("\n");
		
	 }
	  for(i=0;i<3;i++)
	  {printf("     **");
       printf("\n");
	
	 }	 
} 
 	
					
