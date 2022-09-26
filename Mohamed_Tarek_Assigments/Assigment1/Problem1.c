#include <stdio.h>

int main()
{
    int num1,num2,result;
    printf("Please enter the first number: ");
    scanf("%d",&num1);
    printf("Please enter the second number: ");
    scanf("%d",&num2);
    result = ((num1 + num2)*3) -10;
    printf("%d", result);

    return 0;
}
