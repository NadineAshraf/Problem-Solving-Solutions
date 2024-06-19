public class Employee //Employeee.java
{
    private int salary;
    public Employee(int salary)
    {
        this.salary = salary;
    }
    public void work()
    {
        System.out.println("Working as an employee!");
    }
    public int getSalary()
    {
        return salary;
    }
}
public class HRManager extends Employee //HRManager.java
{
    public HRManager(int salary)
    {
        super(salary);
    }
     public void work()
    {
        System.out.println("\nManaging employees");
    }
    public void addEmployee()
    {
       System.out.println("\nAdding new employee!");
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Employee emp = new Employee(40000);
        HRManager mgr = new HRManager(70000);
        emp.work();
        System.out.println("Employee salary: "+emp.getSalary());
        mgr.work();
        System.out.println("Manager salary: "+mgr.getSalary());
        mgr.addEmployee();
    }
}
