#include <stdio.h>
#define pi 3.14
int main()
{
    float radius, Area =0 , cirum = 0;
    printf("Enter the radius: ");
    scanf("%f",&radius);
    Area = pi*radius*radius;
    cirum = 2*pi*radius;
    printf("Area = %0.2f \ncirum = %0.2f",Area,cirum);
    

    return 0;
}
