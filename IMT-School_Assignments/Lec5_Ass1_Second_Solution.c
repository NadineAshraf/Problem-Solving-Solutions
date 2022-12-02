#include <stdio.h>
#define size 10
void Max(int *arr)
{
   int i,j,temp,flag=0;
   for(i=0; i<size; i++)
   { flag=1;
       for(j=0; j<size-1; j++)
       {
           if(arr[j]<arr[j+1])
           {
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
   printf("Max no. = %d\n",arr[0]);
}
void Min(int *arr)
{
     int i,j,temp,flag=0;
   for(i=0; i<size; i++)
   {   flag=1;
       for(j=0; j<size-1; j++)
       {
           if(arr[j]>arr[j+1])
           {
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
   printf("Min no. = %d\n",arr[0]);
}
int main()
{
    int arr[10],i;
   for(i=0; i<10; i++)
   {
       printf("Enter number %d: ",i+1);
       scanf("%d",&arr[i]);
   }
 Max(arr);
 Min(arr);
    return 0;
}
