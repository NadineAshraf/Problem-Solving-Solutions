#include<stdio.h>
int Operation(char opera, float num1, float num2)
{
  int result;
  switch(opera)
  {
      case '+':
              result = num1+num2;
              printf("The result of Addition = %d",result);
              break;
      case '-':
             result = num1-num2;
              printf("The result of Subtration = %d",result);
              break;
      case '*':
              result = num1*num2;
              printf("The result of Multiplication = %d",result);
              break;
      case '/':
              result = num1/num2;
              printf("The result of Divison = %d",result);
              break; 
       default: printf("Error");
                break;
  }
  return result;
}
int main(void)
{
  char ch;
  float x,y;
  printf("Please enter the Operation: ");
  scanf("%c",&ch);
  printf("Please enter the first number: ");
  scanf("%f",&x);
  printf("Please enter the second number: ");
  scanf("%f",&y);
 Operation(ch,x,y);
   
    return 0;
}
