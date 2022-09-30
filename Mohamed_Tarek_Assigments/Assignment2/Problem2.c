#include<stdio.h>
void Alphabet(char alpha)
{
    if((alpha >= 'A') && (alpha <= 'Z') || (alpha >= 'a') && (alpha <='z'))
    {
        printf("The character is alphabet");
    }
    else
    {
        printf("The character is not alphabet");
    }
}
int main(void)
{
   char x;
   printf("Please enter the char: ");
   scanf("%c", &x);
   Alphabet(x);
   
    return 0;
}
