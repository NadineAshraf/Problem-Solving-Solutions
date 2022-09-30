#include<stdio.h>

void ConvertLowerToUpper(char ch)
{
  int result;
  if((ch>='a') && (ch<='z'))
  {
  result = (int) ch -32;
  printf("%c",result);
  }
  else
  {
      printf("Invalid character");
  }
}
int main(void)
{
   char c;
   printf("Please enter the character: ");
   scanf("%c",&c);
   ConvertLowerToUpper(c);
   
    return 0;
}
