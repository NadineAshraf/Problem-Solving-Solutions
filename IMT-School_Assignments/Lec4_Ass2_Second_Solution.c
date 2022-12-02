#include <stdio.h>

int
main ()
{
  int ID, a, b;
  printf ("Please enter your ID: ");
  scanf ("%d", &ID);
  printf ("First number: ");
  scanf ("%d", &a);
  printf ("Second number: ");
  scanf ("%d", &b);
  switch (ID)
    {
    case 1:
      printf ("a + b = %d", a + b);
      break;
    case 2:
      printf ("a - b = %d", a - b);
      break;
    case 3:
      printf ("a * b = %d", a * b);
      break;
    case 4:
      printf ("a / b = %d", a / b);
      break;
    case 5:
      printf ("a && b = %d", a && b);
      break;
    case 6:
      printf ("a || b = %d", a || b);
      break;
    case 7:
      printf ("!a = %d\n", !a);
      printf ("!b = %d", !b);
      break;
    case 8:
      printf ("a ^ b = %d", a ^ b);
      break;
    case 9:
      printf ("a % b = %d", a % b);
      break;
    case 10:
      printf ("a++ = %d\n", a++);
      printf("b++ = %d",b++);
      break;
    case 11:
     printf("a-- = %d\n",a--);
     printf("b-- = %d",b--);
     break;

    }
  return 0;
}
