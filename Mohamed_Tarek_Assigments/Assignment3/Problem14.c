#include <stdio.h>
#include<string.h>

void Reverse_String(char str[])
{
 	int i = 0, j;
	char temp;
	j = strlen(str) - 1;
	
	/* null will remained in the same place just start swapping the array element */
	while (i < j)
	{
		temp = str[i];
		str[i] = str[j];
		str[j] = temp;
		i++;
		j--;
	}
}
int main() 
{
      char line[1000];

    printf("Enter a string: ");
    gets(line);

    Reverse_String(line);

    printf("Output String: ");
    puts(line);
   
   
    return 0;
}
