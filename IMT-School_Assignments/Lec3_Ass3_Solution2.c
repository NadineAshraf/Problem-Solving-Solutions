#include <stdio.h>

int main()
{
    int i,row_num,row_col;
    printf("Please Enter the height of the pyramid: ");
    scanf("%d",&row_col);
    for(row_num = 0; row_num<row_col; row_num++)
    {
        for(i=row_num; i<row_col-1; i++)
        {
            printf(" ");
        }
        for(i=0; i<((2*row_num)+1);i++)
        {
            printf("*");
        }
        printf("\n");
    }
    return 0;
}
