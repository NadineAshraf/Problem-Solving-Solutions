#include <stdio.h>

int main()
{
 int i,row_num,row_col;
 printf("Enter number of row_col: ");
 scanf("%d",&row_col);
 /* Loop for each row */
 for(row_num=0; row_num<row_col; row_num++)
 {
     /* print the spaces on the left */
     for(i=row_num;i<row_col-1;i++)
     {
         printf(" ");
         
     }
     /* print the stars, number of stars in each row = ((2 * Row Number) + 1) */
     for(i=0;i<((2*row_num)+1);i++)
     {
         printf("*");
     }
     printf("\n");
 }

    return 0;
}
