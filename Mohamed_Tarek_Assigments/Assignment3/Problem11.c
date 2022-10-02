#include <stdio.h>
#define size 20
int Count_Character(char s[],char character)
{
	int i=0,count=0;
	while(s[i] != '\0') /* loop until the end of the string */
	{
		if(character == s[i])
		{
		    count++;
		}
		i++;
	}
	return count;
}

int main(void)
{
	char str[size];
	char ch;
	int result,i;
	printf("Please enter the string: ");
 	   gets(str);
	
	printf("Please enter the character : ");
	scanf("%c",&ch);
	result = Count_Character(str,ch);
	printf("Message after converting : %d\n",result);
	return 0;
}
