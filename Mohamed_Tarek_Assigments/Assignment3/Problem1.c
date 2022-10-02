#include <stdio.h>

void summation(int numbers_size, int* numbers)
{
    int i,sum=0;
  
     for(i=0; i<numbers_size; i++)
     {
         sum+=numbers[i];
     }
     printf("sum of array = %d",sum);
    
  
}
int main()
{
    int num,i;
    printf("Please enter the number of array: ");
    scanf("%d",&num);
    int arr[num];
    printf("Please enter the elements of array: ");
    for(i=0; i<num; i++)
    {
        scanf("%d",&arr[i]);
    }
    summation(num,arr );
    

    return 0;
}
