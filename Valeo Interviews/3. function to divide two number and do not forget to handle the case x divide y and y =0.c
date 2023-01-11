#include <stdio.h>
void Divide(int num1, int num2)
{
    float result;
    if(num2 !=0)
    {
        result = num1/num2;
        printf("%.2f",result);
    }
    else
    {
        printf("Error");
    }
}

int main()
{
  Divide(25, 5);
  
   

    return 0;
}
