#include <stdio.h>
#include <stdlib.h>
void scan_arr(int *arr, int size)
{
    int i;
	for(i=0; i<size; i++)
	{
	    printf("Please Enter number %d: ",i+1);
	   scanf("%d",&arr[i]);
	}
}

void print_arr(int *arr, int size)
{
	int i;
	for(i=0; i<size; i++)
	{
		printf("%d\n",arr[i]);
	}
}
void Bubble_Sorting(int *arr, int size)
{
	int i,j,flag=0;
	for(i=0; i<size; i++)
	{
		flag=1;
		for(j=0; j<size-1; j++)
		{
			if(arr[j]>arr[j+1])
			{
				int temp;
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag=0;
			}
		}
		if(flag == 1)
		{
			break;
		}
	}
}
void main(void)
{
  int x;
  printf("Please Enter the number of numbers: ");
  scanf("%d",&x);
  int *arr =(int*)malloc(sizeof(int)*x);
  scan_arr(arr, x);
   Bubble_Sorting(arr,x);
   printf("Values after sorting are:\n");
   print_arr(arr, x);
   
} 
