#include <stdio.h>

int main()
{
  float grade;
  printf("Please enter the grade: ");
  scanf("%f",&grade);
  if(grade >= 85)
  {
      printf("Excellent");
  }
  else if(grade<85 && grade>= 75)
  {
      printf("Very Good");
  }
  else if(grade <75 && grade>= 65)
  {
      printf("Good");
  }
  else if(grade<65 && grade>=50)
  {
      printf("Pass");
  }
  else if(grade < 50)
  {
      printf("Fail");
  }
     
     

    return 0;
}
