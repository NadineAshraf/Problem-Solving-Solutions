#include<stdio.h>

void Prime(int num1, int num2)
{
    int i,j,flag=0;
    printf("The prime numbers are:");
   for(i=num1; i<num2;i++)
   {
       if(i ==2)
       {
           printf("%d ",i);
       }
     else if(i%2 !=0 && i%3 !=0)
     {
      printf("%d ",i);
     }
   }

}
int main(void)
{
   int x,y;
   printf("Please enter the first number: ");
   scanf("%d",&x);
    printf("Please enter the second number: ");
   scanf("%d",&y);
   Prime(x,y);
   
    return 0;
}
