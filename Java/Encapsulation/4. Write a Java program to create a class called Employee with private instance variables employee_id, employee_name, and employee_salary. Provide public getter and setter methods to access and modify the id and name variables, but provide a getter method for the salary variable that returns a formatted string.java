import java.time.LocalDate;
import java.time.Period;

class Employee
{
    private int employee_id;
    private String employee_name;
    private double employee_salary;
    
    public int getEmployeeId()
    {
        return employee_id;
    }
    public void setEmployeeId(int employeeId)
    {
        this.employee_id = employeeId;
    }
    public String getEmployeeName()
    {
        return employee_name;
    }
    public void setEmployeeName(String employeeName)
    {
        this.employee_name = employeeName;
    }
    public double getEmployeeSalary()
    {
        return employee_salary;
    }
    public void setEmployeeSalary(double employeeSalary)
    {
        this.employee_salary = employeeSalary;
    }
    public String getFormattedSalary()
    {
        return String.format("$%.2f",employee_salary);
    }
}

class Main {
    public static void main(String[] args) {
   Employee employee = new Employee();
   employee.setEmployeeId(15);
   employee.setEmployeeName("Nadine Ashraf");
   employee.setEmployeeSalary(5000.0);
   
   int employeeId = employee.getEmployeeId();
   String employeeName = employee.getEmployeeName();
   String employeeSalary = employee.getFormattedSalary();
   
   System.out.println("Employee Name:");
   System.out.println("ID:" + employeeId);
   System.out.println("Name: "+employeeName);
   System.out.println("Salary: "+ employeeSalary);
    
    }
}
