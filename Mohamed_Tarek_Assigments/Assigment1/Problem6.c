#include <stdio.h>

int main()
{
  int num1,num2;
  printf("Enter the first number: ");
  scanf("%d", &num1);
  printf("Enter the second number: ");
  scanf("%d",&num2);
  if(num1 == num2)
  {
      printf("The two numbers are equal");
  }
  else if(num1 > num2)
  {
      printf("The first number is greater than the second one");
  }
  else 
  {
      printf("The second number is greater than the first one");
  }
   

    return 0;
}
