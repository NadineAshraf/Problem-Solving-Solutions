#include <stdio.h>

int main(void)
{
   int index,arr[100],i;
   printf("Please enter the index: ");
   scanf("%d",&index);
   arr[0]=1;
   for(i=1; i<100; i++)
   {
       arr[i]=arr[i-1]*3;
   }
   printf("The number = %d",arr[index]);
	return 0;
}
