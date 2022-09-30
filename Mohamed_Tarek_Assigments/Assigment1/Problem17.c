#include <stdio.h>

int main()
{
  int number,count = 0;
  printf("Please Enter the number: ");
  scanf("%d",&number);
  while(number !=0)
  {
      number/=10;
      count++;
  }
  
    printf("The number of digits: %d",count);

    return 0;
}
