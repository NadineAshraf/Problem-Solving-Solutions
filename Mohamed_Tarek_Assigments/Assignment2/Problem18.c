#include <stdio.h>

int NoIsSquared(int z)
{
    if(z == 1 || z == 0)
    {
        return 0;
    }
    else
    {
        while(1)
        {
          if(z%2 == 0)
           {
              if(z == 2)
             {
                return 0;
             }
           z/=2;
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
  result =  NoIsSquared(num);
  if(result == 0)
  {
      printf("The number %d is squared",num);
  }
  else if(result == 1)
  {
      printf("The number %d is not squared",num);
  }
	return 0;
}
