#include <stdio.h>

#define size 5

void BubbleSorting(int arr[])
{
   int i,j,temp;
   for(j=0; j<size; j++)
   {
     for(i=0;i<size;i++)
     {
       if(arr[i]>arr[i+1])
       {
       temp = arr[i];
       arr[i] = arr[i+1];
       arr[i+1] = temp;
       }
     }
   }
   printf("The array will be: ");
   for(i=0; i<size; i++)
   {
      printf("%d ",arr[i]);
   }
}
int main(void)
{
    int arr[size],i;
	printf("Please enter the elements of array: ");
	for(i=0;i<size; i++)
	{
	    scanf("%d",&arr[i]);
	}
	BubbleSorting(arr);
	return 0;
}
