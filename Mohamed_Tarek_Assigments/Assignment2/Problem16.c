#include <stdio.h>

void CountOnes(unsigned int number)
{
    int count = 0,result=0,i,flag=0;
    for(i=0; i<8;i++)
    {
       result= number%10;
       if(result ==1)
       {
          flag=1;
          count++;
         
       }
       if(i>8)
       {
           
           flag=0;
           count=0;
           break;
       }
       number/=10;
    } 
    if(flag == 0)
    {
    printf("There is an overflow");
    }
    else if(flag ==1)
    {
      printf("No of Counts = %d",count);
    }
}


int main()
{
    unsigned int n;
    printf("Please enter the number: ");
    scanf("%d",&n);
    CountOnes(n);
    
    return 0;
}
