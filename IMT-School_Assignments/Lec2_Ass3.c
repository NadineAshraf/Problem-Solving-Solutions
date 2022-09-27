#include <stdio.h>
void main(void)
{int x,y,z,max;
	printf("Enter number 1:");
	scanf("%d",&x);
	printf("Enter number 2:");
	scanf("%d",&y);
	printf("Enter number 3:");
	scanf("%d",&z);
	if(x>y && x>z)
	printf("Maximum number is %d",max=x);
	else if(y>x && y>z)
	printf("Maximum number is %d",max=y);
	else
	printf("Maximum number is %d",max=z);
	
}