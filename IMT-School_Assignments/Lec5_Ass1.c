#include <stdio.h>
void max(int arr[10]);
void min(int arr[4]);
int j,temp;
void main (void)
{ int arr[10];
	for(int i=0;i<10;i++)
	{ printf("Enter the number %d:",i);
       scanf("%d",&arr[i]);
	}	   
	 max(arr);
	min(arr);
}
void max(int arr[10])
{  
for(int i=0; i<9;i++)
	{ for (j=0;j<9-i;j++)
		{ if(arr[j]> arr[j+1])
			{ temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}															
printf("max=%d\n",arr[9]);
}
void min(int arr[10])
{  
for(int i=0; i<9;i++)
	{ for (j=0;j<9-i;j++)
		{ if(arr[j]> arr[j+1])
			{ temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}															
printf("min=%d",arr[0]);
}