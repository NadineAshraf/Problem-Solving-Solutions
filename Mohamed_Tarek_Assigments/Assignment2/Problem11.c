#include <stdio.h>

int IsPowerOf2(int number)
{

    if(number == 0)
    {
       
        return 0;
    }
    else if(number == 1)
    {
      
        return 1;
    }
    else
    {
        while(1)
        {
            if(number%2 == 0)
            {
                if(number == 2)
                {
                    
                   return 1;
                }
                number/=2;
            }
            else
            {
                
                return 0;
            }
        }
    }
   
}
int main()
{
    int x,result;
    printf("Please enter the power: ");
    scanf("%d",&x);
    result =IsPowerOf2(x);
    if(result == 1)
    {
       printf("The number is power of 2");
    }
    else if(result == 0)
    {
        printf("The number is not power of 2"); 
    }
    
    return 0;
}
