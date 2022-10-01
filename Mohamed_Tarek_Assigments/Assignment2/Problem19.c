

#include <stdio.h>

int NoIsPowerOf3(int number)
{
    if(number == 1 || number == 0)
    {
        return 1;
    }
    else
    {
        while(1)
        {
          if(number%3 == 0)
           {
              if(number == 3)
             {
                return 0;
             }
           number/=3;
           }
          else 
          {
              return 1;
          }
        }
    }
}

int main(void)
{
	int result,num;
	printf("Please enter the number: ");
	scanf("%d",&num);
  result = NoIsPowerOf3(num);
  if(result == 0)
  {
      printf("The number %d is power of 3",num);
  }
  else if(result == 1)
  {
      printf("The number %d is not power of 3",num);
  }
	return 0;
}
