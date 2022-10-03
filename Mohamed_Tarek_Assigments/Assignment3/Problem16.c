#include <stdio.h>


void Reverse_Array(int array_size, int *arr)
{
  int i,temp;
  for(i=0; i< array_size/2; i++)
  {
      temp = arr[i];
      arr[i] = arr[array_size-i-1];
      arr[array_size-i-1] = temp;
  }
}
int main() 
{
  int array[5] = {1,2,3,4,5};
  int i;
  printf("The input is: ");
  for(i=0;i < 5; i++)
  {
     printf("%d ",array[i]);
  }
  printf("\n");
  Reverse_Array(5,array);
  printf("The output will be: ");
  for(i=0;i < 5; i++)
  {
     printf("%d ",array[i]);
  }
  
    return 0;
}
