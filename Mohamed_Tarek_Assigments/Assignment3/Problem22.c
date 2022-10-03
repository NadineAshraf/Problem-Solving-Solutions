#include <stdio.h>
int old_size;
int removeDuplicates (int arr_old[], int n_old, int arr_new[], int *n_new)
{
  int i, j;
 
      for (i = 0; i < old_size -1; i++)
	{
	  if (arr_old[i] != arr_old[i+1])
	    {
	 arr_new[*n_new] = arr_old[i];
        	(*n_new)++;
        }

    }

    /* Store the last element as whether it is unique or repeated, it hasn't stored previously */
    arr_new[*n_new] = arr_old[i];
    (*n_new)++;

    return 0;
}
	        
int main ()
{
  int i,result;
  printf ("Enter the old size array: ");
  scanf ("%d", &old_size);

  int arr1[old_size];
  int arr2[old_size];
  int arr2_usedSize = 0;
  printf("Please enter the elements of array: ");
  for (i = 0; i < old_size; i++)
    {
      scanf ("%d", &arr1[i]);
    }

  result =removeDuplicates (arr1, old_size, arr2, &arr2_usedSize );
  if(result == 0)
  {
      for(i=0;i<arr2_usedSize;i++)
		{
			printf("%d ",arr2[i]);
		}
  }

  return 0;
}
