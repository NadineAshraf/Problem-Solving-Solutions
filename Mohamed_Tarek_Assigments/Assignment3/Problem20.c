#include <stdio.h>
 static int size;
int OutputArray[256];
void Range(int LowerValue, int HigherValue , int *arr)
{
  int i,count=0,ReversedNo;
  
  if((LowerValue>= HigherValue) || ( HigherValue-1 == LowerValue))
	{
		arr[0] = 0xFF;
		arr[1] = 0xFF;
		printf("The values are= %d %d",arr[0],arr[1]);
		count =2;
		
       printf("\nOutput array size = %d",count);
	}
	else
	{
	    
	
    for(i=HigherValue-1; i> LowerValue; i-- )
  {
      
      count++;
  }
  printf("The array will be: ");
  for(i=size-2; i> 0; i--)
  {
      HigherValue--;
      arr[i] = HigherValue;
      printf("%d ",arr[i]);
  }
  
  printf("\nOutput array size = %d",count);
	}
}

int main() 
{ 
    int n1,n2,i;
   
    printf("Enter size of array: ");
    scanf("%d",&size);
    printf("LowerValue = ");
    scanf("%d",&n1);
     printf("HigherValue = ");
    scanf("%d",&n2);
    int arr[size];

    Range(n1,n2,arr);
   
    return 0;
}
