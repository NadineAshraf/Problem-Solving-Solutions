#include <stdio.h>
void main (void)
{ int ID,password,i;
	printf("please enter your ID ");
	scanf("%d",&ID);
	if(ID==1234  ||ID==5678 || ID==9870)
	
	
	switch(ID)
	{
		case 1234:
		printf("Please enter your password ");
		for(i=0;i<3;i++)
		{
		
		scanf("%d",&password);
			if(password==7788)
			{printf("Welcome Ahmed\n");
			break;}
			else
			
		{if(i<2)
		printf("Try again: ");}
			
		}
		if(password!=7788)
		{printf("Incorrect password for 3 times.No more tries");	
		
		}		
		break;
		case 5678:
		printf("Please enter your password ");
		for(i=0;i<3;i++)
		{
		
		scanf("%d",&password);
			if(password==5566)
			{printf("Welcome Amr");
			break;}
			else
			
		{if(i<2)
		printf("Try again: ");}
			
		}
		if(password!=5566)
		{printf("Incorrect password for 3 times.No more tries");	
		}
		break;
		case 9870:
		printf("Please enter your password ");
		for(i=0;i<3;i++)
		{
		
		scanf("%d",&password);
			if(password==1122)
			{printf("Welcome Wael");
			break;}
			else
			
		{if(i<2)
		printf("Try again: ");}
			
		}
		if(password!=1122)
		{printf("Incorrect password for 3 times.No more tries\n");	
		}
		break;
	}	
		else
	printf("You are not registered");		
}