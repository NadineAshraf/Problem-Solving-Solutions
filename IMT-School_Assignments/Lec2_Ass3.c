#include <stdio.h>

int main()
{
    int i,arr[3],max=0,flag=0;
    for(i=0; i<3; i++)
    {
        printf("Enter number %d: ",i+1);
        scanf("%d",&arr[i]);
    }
    for(i=0; i<3; i++)
    {
        if(arr[i]> max)
        {
            max = arr[i];
            flag = 1;
        }
    }
    if(flag == 1)
    {
        printf("Maximum number is %d",max);
    }
    return 0;
}
