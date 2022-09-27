#include <stdio.h>

int main()
{
    
    int temp;
    int arr[10];
    for(int i=0;i<10;i++)
    scanf("%d",&arr[i]);
    for(int i=0; i<9; i++)
    {
           if( (arr[i]%2) !=0)
			{
			  continue;
			}
			else
			{ 
			    for(int j=0;j<10;j++)
			    {
			       if((arr[j]%2) ==0)
			        {
			          temp=arr[j];
			         arr[j]=arr[j+1];
			         arr[j+1]=temp;	
			        }
			     }
			}
    }
  for(int i=0; i<10; i++)
    printf("%d", arr[i]);
    return 0;
}
