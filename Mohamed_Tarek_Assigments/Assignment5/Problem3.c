#include <stdio.h>

typedef struct complex{
    float real;
    float imag;
 }comp;
comp add(comp n1, comp n2);

int main()
{
   
    comp n1,n2,temp;
    printf("First Complex number\n");
    printf("Enter real and Imaginary part: ");
    scanf("%f %f",&n1.real,&n1.imag);
    printf("Second Complex number\n");
    printf("Enter real and Imaginary part: ");
    scanf("%f %f",&n2.real,&n2.imag);
    temp = add(n1,n2);
    printf("Sum = %.f + %.fi",temp.real,temp.imag);
    return 0;
}
comp add(comp n1, comp n2)
{
    comp temp;
    temp.real = n1.real + n2.real;
    temp.imag = n1.imag + n2.imag;
    return temp;
}
