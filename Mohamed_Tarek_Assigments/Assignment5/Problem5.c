#include <stdio.h>
#define MAX_NUM_STUDENTS 10
struct student 
{
    char name[30];
    int id;
    float grade;
};
void fillStudentsInfromation(struct student *st_ptr, int size);
void printStudentsInformation(struct student *st_ptr, int size);
int main()
{
     struct student students[MAX_NUM_STUDENTS];
     fillStudentsInfromation(students, MAX_NUM_STUDENTS);
     printStudentsInformation(students, MAX_NUM_STUDENTS);
   
   
    return 0;
}
void fillStudentsInfromation(struct student *st_ptr, int size)
{
    int i;
    for(i=0; i<size; i++)
    {
        printf("Please Enter Name, Id and Grade for student number %d:",i+1);
        scanf("%s %d %f",(st_ptr ->name),&(st_ptr->id),&(st_ptr->grade));
        printf("\n");
        st_ptr++; //Increment the pointer to get the next structure in the array
    }
}
void printStudentsInformation(struct student *st_ptr, int size)
{
      int i;
    for(i=0; i<size; i++)
    {
        printf("Student Number %d Information: \n",i+1);
        printf("Name: %s\n",st_ptr->name);
        printf("Id: %d\n",st_ptr->id);
        printf("Grade: %f\n",st_ptr->grade);
        st_ptr++; //Increment the pointer to get the next structure in the array
    }
}
