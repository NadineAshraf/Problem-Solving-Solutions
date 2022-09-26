#include <stdio.h>

int main()
{
    float  celsius,fahrenheit;
    printf("Enter the degree in Celsius:");
    scanf("%f",&celsius);
    fahrenheit = celsius* 9/5 +32;
    printf("The degree in Fahrenheit is: %f",fahrenheit);
    

 
    return 0;
}
