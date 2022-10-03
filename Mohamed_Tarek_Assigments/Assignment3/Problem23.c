#include <stdio.h>

int PrintFreqCharacters(char str[])
{
  int i,frequency[256]={0};
  for(i=0; str[i] != '\0'; i++)
  {
     
     frequency[str[i]]++; /* Increment the value of this array element */
     
  }
  for(i = 0; i < 256; i++)
	{
		if(frequency[i] != 0)
		{
			printf("%c %d\n", i, frequency[i]);
		}
	}

    return 0;
}
	        
int main ()
{
  char str[100];

	gets(str); /* Get string from user */

	PrintFreqCharacters(str); /* Call the function and Pass string */


  return 0;
}
