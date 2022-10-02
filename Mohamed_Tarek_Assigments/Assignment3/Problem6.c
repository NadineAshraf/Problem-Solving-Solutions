#include <stdio.h>
#define size 5

int LinearSearch(int arr[],int number)
{
    int i,flag=0;
  for(i=size;i>=0;i--)
  {
      if(number == arr[i])
      {
          flag=1;
          break;
      }
  }
  if(flag ==1)
  {
      return i;
  }
  else 
  {
      return -1;
  }
}
int main(void)
{
    int i,index, arr[size],num;
     printf("Please enter the number: ");
  scanf("%d",&num);
	printf("Please enter the elements of array: ");
	for(i=0;i<size; i++)
	{
	    scanf("%d",&arr[i]);
	}
	index = LinearSearch(arr,num);
	printf("The index of the number = %d\n",index);
	if(index == -1)
	{
	    printf("The number is not found");
	}
	else
	{
	    printf("The number is found");
	}
	return 0;
}
