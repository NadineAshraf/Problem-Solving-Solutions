#include<stdio.h>  
int main()
{    
   int number,power,result=1;
   printf("Please enter the number: ");
   scanf("%d",&number);
   printf("Please enter the power: ");
   scanf("%d",&power);
    while (power != 0)
    {
        result *= number;
        power--;
    }

    printf("Answer = %d", result);

return 0;  
}
