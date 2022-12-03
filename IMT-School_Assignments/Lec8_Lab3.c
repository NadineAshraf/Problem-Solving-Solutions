#include <stdio.h>


typedef struct {
    float Math;
    float Language;
    float Physics;
    float Chemistry;
}Student;
int main()
{
    int ID;
    Student arr[10] =
    {
        {50,60,70,80},  /*Student 1 */
        {100,98,95,91}, /*Student 2*/
        {47,75,60,51},  /*Student 3*/
        {64,75,75,90},  /*Student 4*/
        {30,40,50,60},  /*Student 5*/
        {44,20,59,10},  /*Student 6*/
        {11,39,49,30},  /*Student 7*/
        {22,40,39,12},  /*Student 8*/
        {47,20,45,10},  /*Student 9*/
        {47,29,30,10}   /*Student 10*/
    };
    printf("Please Enter Student ID: ");
    scanf("%d",&ID);
    if(ID < 10)
    {
        printf("Math Grade: %.2f\n",arr[ID].Math);
        printf("Language Grade: %.2f\n",arr[ID].Language);
        printf("Physics Grade: %.2f\n",arr[ID].Physics);
        printf("Chemistry Grade: %.2f\n",arr[ID].Chemistry);
    }
    else
    {
        printf("Student ID is not correct");
    }

    return 0;
}
