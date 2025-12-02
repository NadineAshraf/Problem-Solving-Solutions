abstract class Employee
{
    public String name;
    public double baseSalary;
    public Employee(String name, double baseSalary)
    {
        this.name = name;
        this.baseSalary = baseSalary;
    }
    public abstract double calculateSalary();
    public abstract void displayInfo();
}
class Manager extends Employee
{
    public double bonus;
    public Manager(String name, double baseSalary, double bonus)
    {
        super(name,baseSalary);
        this.bonus = bonus;
    }
    @Override
     public double calculateSalary()
    {
        return baseSalary + bonus;
    }
    @Override
    public void displayInfo()
    {
        System.out.println("Manager name: " + name);
        System.out.println("Base Salary: " + baseSalary);
        System.out.println("Bonus: "+bonus);
        System.out.println("Total Salary "+ calculateSalary());
    }
    
}
class Programmer extends Employee
{
    public int overtimeHours;
    public double hourlyrate;
    public Programmer(String name, double baseSalary, int overtimeHours, double hourlyrate)
    {
        super(name,baseSalary);
        this.overtimeHours = overtimeHours;
        this.hourlyrate = hourlyrate;
    }
    @Override
    public double calculateSalary()
    {
        return baseSalary + (overtimeHours * hourlyrate);
    }
    @Override
    public void displayInfo()
    {
        System.out.println("Manager name: " + name);
        System.out.println("Base Salary: " + baseSalary);
        System.out.println("Overtime Hours: "+overtimeHours);
        System.out.println("HourlyRate: "+hourlyrate);
        System.out.println("Total Salary "+ calculateSalary());
    }
}
public class Main
    {
        public static void main (String[] args)
        { 
           Employee manager = new Manager("Corona",6000,500);
            Employee programmer = new Manager("Mira",7000,600);
            manager.displayInfo();
            programmer.displayInfo();
        }
}
