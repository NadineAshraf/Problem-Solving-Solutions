
#include <stdio.h>

int main()
{
    int num = 0,i;
    printf("Enter the number: ");
    scanf("%d",&num);
    for(i=0; i<=num; i++)
    {
        if(num== i*i)
       {
           printf("It's a perfect square");
            break;
       }
       
       
    }
    if(num != i*i)
    printf("It's a not perfect square");
     
     

    return 0;
}
