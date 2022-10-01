
#include <stdio.h>

void CountOnes(unsigned int number)
{
    int count = 0,result=0,i;
    for(i=0; i<32;i++)
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
    unsigned int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    CountOnes(n);
    
    return 0;
}
