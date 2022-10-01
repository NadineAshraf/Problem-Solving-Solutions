#include <stdio.h>

void Summation(float num1, float num2)
{
   int result;
   result = num1 + num2;
   printf("%d",result);
}
int main()
{
    float x,y;
    printf("Please enter the first number: ");
    scanf("%f",&x);
    printf("Please enter the second number: ");
    scanf("%f",&y);
    Summation(x,y);
    
    return 0;
}
