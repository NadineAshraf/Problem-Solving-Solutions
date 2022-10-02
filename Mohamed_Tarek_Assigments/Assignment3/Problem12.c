#include <stdio.h>
#define size 20
int String_Length(char s[])
{
	int i=0,count=0;
	while(s[i] != '\0') /* loop until the end of the string */
	{
	    
		
		   
		
		i++;
	}
	return i;
}

int main(void)
{
	char str[size];
	char ch;
	int result,i;
	printf("Please enter the string: ");
 	 gets(str);
	result = String_Length(str);
	printf("string length : %d\n",result);
	return 0;
}
