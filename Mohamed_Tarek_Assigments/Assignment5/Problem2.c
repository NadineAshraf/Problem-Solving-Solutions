#include <stdio.h>

struct Add{
     int feet;
     float inch;
 }d1,d2,sum;
int main()
{
    printf("Please enter the first distance in feet: ");
    scanf("%d",&d1.feet);
    printf("Please enter the first distance in inch: ");
    scanf("%f",&d1.inch);
    printf("Please enter the second distance in feet: ");
    scanf("%d",&d2.feet);
    printf("Please enter the second distance in inch: ");
    scanf("%f",&d2.inch);
    sum.feet = d1.feet + d2.feet;
    sum.inch = d1.inch + d2.inch;
    /* If inch is greater than 12, changing it to feet */
    if(sum.inch>12.0)
    {
        sum.inch = sum.inch-12.0;
        ++sum.feet;
    }
    printf("Sum of distances = %d - %.f ",sum.feet,sum.inch);
    return 0;
}
