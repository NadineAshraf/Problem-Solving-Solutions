#include <stdio.h>
void Max(int *arr)
{
   int i,j,temp;
   for(i=0; i<4; i++)
   {
       for(j=0; j<3; j++)
       {
           if(arr[j]<arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
   printf("Max no. = %d\n",arr[0]);
}
void Min(int *arr)
{
     int i,j,temp;
   for(i=0; i<4; i++)
   {
       for(j=0; j<3; j++)
       {
           if(arr[j]>arr[j+1])
           {
               temp = arr[j];
               arr[j] = arr[j+1];
               arr[j+1] = temp;
           }
       }
   }
   printf("Min no. = %d\n",arr[0]);
}
int main()
{
    int arr[4],i;
   for(i=0; i<4; i++)
   {
       printf("Enter number %d: ",i+1);
       scanf("%d",&arr[i]);
   }
 Max(arr);
 Min(arr);
    return 0;
}
