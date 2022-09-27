#include <stdio.h>

int main()
{
  char operation;
  float num1,num2;
    printf("Enter the operation: ");
  scanf("%c",&operation);
  printf("Enter the first number: ");
  scanf("%f", &num1);
  printf("Enter the second number: ");
  scanf("%f", &num2);
  double result;

  switch(operation)
  {
     case '+':
             result = num1+num2;
             printf("Result = %f",result);
             break;
     case'-':
            result = num1-num2;
             printf("Result = %f",result);
             break;
     case '*':
           result = num1*num2;
           printf("Result = %f",result);
             break;
    case'/':
            result = num1/num2;
           printf("Result = %f",result);
             break;
    default:
          printf("The operation doesn't exit");
    
            
  }
     
