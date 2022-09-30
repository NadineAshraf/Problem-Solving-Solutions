
#include<stdio.h>

int EvenOROdd(int number)
{
  if(number%2 == 0)
  {
      return 0;
  }
  else
  {
      return 1;
  }
}
int main(void)
{
  int x;
  printf("Please enter the number: ");
  scanf("%d",&x);
  if(EvenOROdd(x) == 0)
  {
      printf("The number %d is even",x);
  }
  else
  {
      printf("The number %d is odd",x);
  }
   
    return 0;
}
