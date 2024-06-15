public class Person 
{
    private String name;
    private int age;
    public Person(String n, int a)
    {
        name =n;
        age =a;
    }
    public String getName()
    {
        return name;
    }
    public int getAge()
    {
        return age;
    }

public static void main(String[] args) {
      Person p1 = new Person("Nadine",24);
      Person p2 = new Person("Ashraf",55);
      System.out.println(p1.getName() + " is " + p1.getAge() + " years old.");
    System.out.println(p2.getName() + " is " + p2.getAge() + " years old.\n");
        
      
        

    }
}
