#include <stdio.h>

int main()
{
    int sum=0, x=0;
    for(x=0; x<100;x++)
    {
        sum+=x;
    }
printf("sum of first 100 integers = %d\n", sum);
if(sum =4950)
{
    printf("The sum of first 100 integers is correct");
}

else
{
    printf("The sum of first 100 integers is not correct");
}
    return 0;
}
