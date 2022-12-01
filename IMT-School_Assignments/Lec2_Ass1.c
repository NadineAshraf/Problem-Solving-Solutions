#include <stdio.h>

int main()
{
   int i,arr[10],x,flag=0;
   for(i=0; i<10; i++)
   {
       printf("Enter Number %d: ",i+1);
       scanf("%d",&arr[i]);
   }
   printf("Enter the value to search: ");
   scanf("%d",&x);
   for(i=0; i<10; i++)
   {
       if(arr[i] == x)
       {
           printf("Value is exist at element number %d",i+1);
           flag=0;
           break;
           
           
       }
       else
       {
           flag =1;
           
       }
   }
   if(flag == 1)
   {
      printf("Number is not found"); 
   }
    return 0;
}
