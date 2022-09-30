#include <stdio.h>

int main()
{
    int number, reversedNumber = 0, remainder;

    printf("Enter an integer: ");
    scanf("%d", &number);

    while(number != 0)
    {
		/* Get the first digit from the right */
        remainder = number%10;
		
		/* in the reversedNumber(result number) multiply the old value by 10 to added ZERO to the right
		   then added the new digit(remainder) to the right */
        reversedNumber = reversedNumber*10 + remainder;
		
		/* Divide number by 10 to get the next digit to right before the next loop iteration */
        number /= 10;
    }

    printf("Reversed Number = %d", reversedNumber);

    return 0;
}
