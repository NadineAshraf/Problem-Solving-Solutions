class Person{
 public String firstName;
 public String lastName;
 
 public Person(String firstName, String lastName)
 {
     this.firstName = firstName;
     this.lastName = lastName;
 }
 
 public String getFirstName()
 {
     return firstName;
 }
 public String getLastName()
 {
     return lastName;
 }
}
class Employee extends Person{
    int employeeId;
    String jobTitle;
  public Employee(String firstName, String lastName, int employeeId, String jobTitle)  
  {
      super(firstName,lastName);
      this.employeeId = employeeId;
      this.jobTitle = jobTitle;
  }
  public int getEmployeeId()
  {
      return employeeId;
  }
  @Override
  public String getLastName()
  {
      return super.getLastName() + " " +jobTitle;
  }
}
public class Main
{
    public static void main(String[] args) {
        Employee employee1 = new Employee("Nadine","Ashraf",12,"Embedded Software");
        System.out.println(employee1.getFirstName()+" "+ employee1.getLastName() +" "+ employee1.getEmployeeId());
        Employee employee2 = new Employee("Ramy","Ashraf",14,"Sales");
        System.out.println(employee2.getFirstName() +" "+ employee2.getLastName() +" "+ employee2.getEmployeeId());
    }
}
