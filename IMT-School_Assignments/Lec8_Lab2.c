#include <stdio.h>


typedef struct MyStruct{
    float salary;
    float bonus;
    float deductions;
}Employee;
int main()
{
    float sum=0;
    Employee Ahmed,Amr,Waleed;
    printf("Please Enter Ahmed Salary: ");
    scanf("%f",&Ahmed.salary);
    printf("Please Enter Ahmed Bonus: ");
    scanf("%f",&Ahmed.bonus);
    printf("Please Enter Ahmed Deduction: ");
    scanf("%f",&Ahmed.deductions);
    printf("Please Enter Amr Salary: ");
    scanf("%f",&Amr.salary);
    printf("Please Enter Amr Bonus: ");
    scanf("%f",&Amr.bonus);
    printf("Please Enter Amr Deduction: ");
    scanf("%f",&Amr.deductions);
    printf("Please Enter Waleed Salary: ");
    scanf("%f",&Waleed.salary);
    printf("Please Enter Waleed Bonus: ");
    scanf("%f",&Waleed.bonus);
    printf("Please Enter Waleed Deduction: ");
    scanf("%f",&Waleed.deductions);
    sum = Ahmed.salary + Ahmed.bonus - Ahmed.deductions;
    sum+= Amr.salary + Amr.bonus - Amr.deductions;
    sum+= Waleed.salary + Waleed.bonus - Waleed.deductions;
    printf("Total value needed is %.2f",sum);
    

    return 0;
}
