#include <stdio.h>

int main()
{
    int x,factorial =1,i;
    printf("Please Enter the Positive number: ");
    scanf("%d", &x);
    for(i=x; i>0; i--)
    {
        factorial*=i;
    }
    printf("Factorial of number %d is %d",x,factorial);
    return 0;
}
