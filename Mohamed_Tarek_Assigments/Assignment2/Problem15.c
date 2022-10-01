
#include <stdio.h>

void CountOnes(int number)
{
    int count = 0,result=0;
    while(number !=0)
    {
       result= number%10;
       if(result ==1)
       {
          
          count++;
         
       }
       number/=10;
    } 
      printf("No of Counts = %d",count);
}


int main()
{
    int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    CountOnes(n);
    
    return 0;
}
