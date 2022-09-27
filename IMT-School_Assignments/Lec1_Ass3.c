#include <stdio.h>
void main(void)
{ int a,b;
	printf("Please Enter number a: ");
	scanf("%d",&a);
	printf("Please Enter number b: ");
	scanf("%d",&b);
	printf("a + b = %d\na - b = %d\na & b = %d\na | b = %d\na ^ b = %d\n",a+b,a-b,a&b,a|b,a^b);
	
	}