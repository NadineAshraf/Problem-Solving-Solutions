public class Employee
{
    private String name;
    private String jobtitle;
    private double salary;
    public Employee(String name, String jobtitle, double salary)
    {
        this.name = name;
        this.jobtitle = jobtitle;
        this.salary = salary;
    }
    public void setJobTitle(String jobtitle)
    {
        this.jobtitle = jobtitle;
    }
    public String getjobTitle()
    {
        return jobtitle;
    }
    public void setName(String name)
    {
       this.name = name;
    }
    public String getName()
    {
        return name;
    }
    public void setSalary(double salary)
    {
        this.salary = salary;
    }
    public double getSalary()
    {
        return salary;
    }
    public void raiseSalary(double percentage)
    {
        salary = salary + salary *percentage/100;
    }
    public void PrintEmployeeDetails()
    {
        System.out.println("Name: "+name);
        System.out.println("Job Title: "+jobtitle);
        System.out.println("Salary: "+salary);
    }
   
 public static void main(String[] args) {
     Employee employee1 = new Employee("Franziska Waltraud", "HR Manager", 40000);
     Employee employee2 = new Employee("Hubertus Andrea", "Software Engineer", 60000);
     System.out.println("\nEmployee Details: ");
     employee1.PrintEmployeeDetails();
     employee2.PrintEmployeeDetails();
     
     employee1.raiseSalary(8);
    employee2.raiseSalary(12);
    
    System.out.println("\nAfter raising salary:");
    System.out.println("\n8% for 'Franziska Waltraud':");
    employee1.PrintEmployeeDetails();
    System.out.println("\n12% for 'Hubertus Andrea':");
    employee2.PrintEmployeeDetails();
 
  }
        
      
        

    
}
