#include <stdio.h>
void main(void)
{ int x1,x2,x3,x4,x5,x6,x7,x8,x9,x10,search;
	printf("Enter Number 1: ");
	scanf("%d",&x1);
	printf("Enter Number 2: ");
	scanf("%d",&x2);
	printf("Enter Number 3: ");
	scanf("%d",&x3);
	printf("Enter Number 4: ");
	scanf("%d",&x4);
	printf("Enter Number 5: ");
	scanf("%d",&x5);
	printf("Enter Number 6: ");
	scanf("%d",&x6);
	printf("Enter Number 7: ");
	scanf("%d",&x7);
	printf("Enter Number 8: ");
	scanf("%d",&x8);
	printf("Enter Number 9: ");
	scanf("%d",&x9);
	printf("Enter Number 10: ");
	scanf("%d",&x10);
	printf("Enter the value to search: ");
	scanf("%d",&search);
	if(search==x1)
	printf("value is exist at element number 1");
	else if(search==x2)
	printf("value is exist at element number 2");
	else if(search==x3)
	printf("value is exist at element number 3");
	else if(search==x4)
	printf("value is exist at element number 4");
	else if(search==x5)
	printf("value is exist at element number 5");
	else if(search==x6)
	printf("value is exist at element number 6");
	else if(search==x7)
	printf("value is exist at element number 7");
	else if(search==x8)
	printf("value is exist at element number 8");
	else if(search==x9)
	printf("value is exist at element number 9");
	else if(search==x10)
	printf("value is exist at element number 10");
	else
	printf("The number isn't found");
}