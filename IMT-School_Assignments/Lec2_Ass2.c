#include <stdio.h>
void main(void)
{ int id=1234,password=1234,id1,pass;
	char username[]="ahmed";
	scanf("%d",&id1);
	if(id1==id)
	 {scanf("%d",&pass);
	  if(password==pass)
	  printf("%s",username);
	  else 
	  printf("Incorrect password");
	 }
	 else
	 printf("Incorrect id");	  
	
}