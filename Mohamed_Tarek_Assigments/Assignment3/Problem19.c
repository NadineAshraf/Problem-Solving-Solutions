#include <stdio.h>


int Identical_Array(int array_size, int *array1, int *array2)
{
  int i;
  for(i=0; i<array_size; i++)
  {
      if(array1[i] == array2[i])
      {
          return 0;
      }
      else
      {
          return 1;
      }
  }
}
int main() 
{
    int size, i,result;
    printf("Enter the size of array: ");
    scanf("%d",&size);
    int arr1[size];
    int arr2[size];
    printf("Please enter the first array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr1[i]);
    }
     printf("Please enter the second array: ");
    for(i=0; i<size; i++)
    {
        scanf("%d",&arr2[i]);
    }
  
 result = Identical_Array(size, arr1, arr2);
 if(result == 0)
 {
   printf("The two arrays are identical");
  
 }
 else if (result == 1)
{
    printf("The two arrays are not identical");
}  
  
  
    return 0;
}

