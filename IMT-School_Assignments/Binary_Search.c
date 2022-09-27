#include <stdio.h>
int x,y,k,flag=0;
int arr[10];
void swap(int x,int y);
void func(int *ptr);
void main(void)
{ 
	for( k=0;k<10;k++)
	{ scanf("%d",&arr[k]);
	}
	swap(x,y);
	func(arr);
	
}
void swap(int x,int y)
{int temp;
	for(int i=0;i<10;i++)
	{ for(int j=0;j<10-i;j++)
		{ if(arr[j]>arr[j+1])
			{temp=arr[j];
			 arr[j]=arr[j+1];
			 arr[j+1]=temp;	
			}			 		
		}		
	}
}
void func(int *ptr)
{int input,start=0,end=9,middle;
printf("Enter the number: ");
scanf("%d",&input);
while(start<=end)
{ middle=(start+end)/2;
	if(arr[middle]==input)
	{ flag=1;
		break;
	}
	else if(arr[middle]<input)
	start=middle+1;
	else if(arr[middle]>input)
	end=middle-1;
}	
if(flag==0)
printf("Not exist");
else
printf("Exists");

}