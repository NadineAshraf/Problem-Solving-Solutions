#include<stdio.h>
void PosORNeg(int number)
{
    if(number < 0)
    {
        printf("The number is Negative");
    }
    else if(number > 0)
    {
        printf("The number is positive");
    }
    else
    {
        printf("The number is Zero");
    }
}
int main(void)
{
   int x;
   printf("Please enter the number: ");
   scanf("%d", &x);
  PosORNeg(x);
   
    return 0;
}
