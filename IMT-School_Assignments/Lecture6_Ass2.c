
#include <stdio.h>
int x=30, y=40, z=50;
void swap(int *p ,int *q ,int *r);
void main (void)
{
	int *p=&x , *q=&y ,*r=&z;
	printf("The value of x = %d\nThe value of y = %d\nThe value of z = %d\n",x,y,z);
	printf("The value of p = %d\nThe value of q = %d\nThe value of r = %d\n",p,q,r);
	printf("The value of *p = %d\nThe value of *q = %d\nThe value of *r = %d\n",*p,*q,*r);
	printf("Swaping pointers\n");
	swap(&x,&y,&z);
}
void swap(int *p ,int *q ,int *r)
{
	int *temp;
	temp=r;
	r=p;
	p=q;
	q=temp;
	printf("The value of x = %d\nThe value of y = %d\nThe value of z = %d\n",x,y,z);
	printf("The value of p = %d\nThe value of q = %d\nThe value of r = %d\n",p,q,r);
	printf("The value of *p = %d\nThe value of *q = %d\nThe value of *r = %d\n",*p,*q,*r);
}