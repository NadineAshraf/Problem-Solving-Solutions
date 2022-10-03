#include <stdio.h>


int * Swap (int a_size,int *a,int b_size,int *b)
{
    int temp,i;
    for(i=0; i<a_size; i++)
    {
        temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
    return a;
}
int main() 
{
  int i;
  int array1[5] = {1,2,3,4,5};
  int array2[5] = {6,7,8,9,10};
  printf("Array1 before swap: ");
  for(i=0; i<5; i++)
  {
      printf("%d",array1[i]);
  }
  printf("\n");
  printf("Array2 before swap: ");
  for(i=0; i<5; i++)
  {
      printf("%d",array2[i]);
  }
  printf("\n");
  Swap (5,array1,5,array2);
    printf("Array1 after swap: ");
  for(i=0; i<5; i++)
  {
      printf("%d",array1[i]);
  }
  printf("\n");
  printf("Array2 after swap: ");
  for(i=0; i<5; i++)
  {
      printf("%d",array2[i]);
  }
  
    return 0;
}
