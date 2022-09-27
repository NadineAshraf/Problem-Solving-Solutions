#include <stdio.h>
int arr[10];
void func (int *ptr);
void main (void)
{
	for( int k=0;k<10;k++)
	{ scanf("%d",&arr[k]);
	}
	func(arr);
	
}	
void func (int *ptr)
{int temp,i;
	for( i=0;i<10;i++)
	{ for(int j=0;j<10-i;j++)
		{ if(arr[j]>arr[j+1])
			{temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;	
			}			 		
		}
		
	}
	
		for(i=1;i<=10;i++)
	{
	printf("%d-->",ptr[i]);	}
}	