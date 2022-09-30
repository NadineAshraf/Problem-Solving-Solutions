 
#include <stdio.h>

void Holes(int number)
{
    int data,count=0,flag=0;
  
      while(number !=0)
     {
          data = number%10;
        if(data ==0 || data == 4 || data == 6 || data == 9)
        {
            count++;
        }
        else if(data == 8)
        {
            count+=2;
        }
       else
       {
           count+=0;
       }
         number/=10;
     }
    printf("The number of holes: %d ",count);
}


int main(void)
{
	int x;
	printf("Please enter the number: ");
	scanf("%d",&x);
	Holes(x);
	
	
}
