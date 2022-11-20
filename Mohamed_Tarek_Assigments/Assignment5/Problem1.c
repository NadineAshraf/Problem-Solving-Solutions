#include <stdio.h>

struct student{
     char name[30];
     int roll;
     float marks;
 }s;
int main()
{
    int i;
    printf("Please enter the name: ");
    scanf("%s",&s.name);
    printf("Please enter the roll: ");
    scanf("%d",&s.roll);
    printf("Please enter the marks: ");
    scanf("%f",&s.marks);
    printf("**********************************\n");
    printf("Display the informations\n");
    printf("Name: %s\n",s.name);
    printf("roll: %d\n",s.roll);
    printf("marks: %.2f\n",s.marks);

    return 0;
}
