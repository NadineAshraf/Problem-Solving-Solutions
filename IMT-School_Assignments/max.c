#include <stdio.h>
void max(int x, int y);
void main(void)
{  int a,b;
 printf("Enter the first number");
	scanf("%d",&a);
	printf("Enter the second number");
	scanf("%d",&b);
	max(a,b);
}
void max(int x, int y)
{ if(x>y)
	printf("max = %d",x);
  else 
  printf("max = %d",y);

}