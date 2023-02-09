#include <stdio.h>
#include <string.h>
union family_name
{
    char first_name[30];
    char last_name[30];
};
int main()
{
  union family_name member;
  // store "Nadine Ashraf" --> first_name
  strcpy(member.first_name,"Nadine Ashraf");
  // last_name share the same memory area with first_name
  printf("Last Name: %s\n",member.last_name);
  // union allocate memory equals to the size of its largest memory
  printf("Size of Union family_name is: %ld\n",sizeof(union family_name));
   
   
    return 0;
}
