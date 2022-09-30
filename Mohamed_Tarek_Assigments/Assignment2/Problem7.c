#include<stdio.h>

void Multiple(int num1, int num2)
{
 if(num1%num2 ==0)
 {
     printf("The number %d is Multiple of %d",num2,num1);
 }
 else
 {
     printf("The number %d is not Multiple of %d",num2,num1);
 }
}
int main(void)
{
   int x,y;
   printf("Please enter the first number: ");
   scanf("%d",&x);
    printf("Please enter the second number: ");
   scanf("%d",&y);
   Multiple(x,y);
   
    return 0;
}
