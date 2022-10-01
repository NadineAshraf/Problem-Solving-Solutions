#include <stdio.h>

void Temperature(int degree)
{

   if(degree>=0 && degree <=30)
   {
       printf("Output = 7");
   }
   else if(degree>=30 && degree <=60)
   {
       printf("Output = 5");
   }
   else if(degree>=60 && degree <=90)
   {
       printf("Output = 3");
   }
   else if(degree>=90 && degree<=100)
   {
       printf("Output = 1");
   }
    else if(degree>100)
   {
       printf("Invalid");
   }
   
}
int main()
{
    int x,result;
    printf("Input = ");
    scanf("%d",&x);
    Temperature(x);
    
    return 0;
}
