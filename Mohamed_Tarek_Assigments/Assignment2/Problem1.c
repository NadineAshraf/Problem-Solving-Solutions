#include<stdio.h>
void Cube(int number)
{
    printf("%d",number*number*number);
}
int main(void)
{
    int x;
  printf("Please enter the number: ");
  scanf("%d",&x);
 Cube(x);
    return 0;
}
