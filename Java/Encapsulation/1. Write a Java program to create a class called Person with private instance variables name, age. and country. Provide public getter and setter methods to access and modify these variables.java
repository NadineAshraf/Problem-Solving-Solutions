public Person //Person.java
{
    private String name;
    private int age;
    private String country;
    public String getName()
    {
        return name;
    }
    public void setName(String name)
    {
        this.name=name;
    }
    public int getAge()
    {
        return age;
    }
    public void setAge(int age)
    {
        this.age=age;
    }
    public String getCountry()
    {
        return country;
    }
    public void setCountry(String country)
    {
        this.country=country;
    }
}

//Main.java
public class Main{
    public static void main(String[] args)
    {
        Person person = new Person();
        person.setName("Nadine Ashraf");
        person.setAge(25);
        person.setCountry("Egypt");
        
        String name = person.getName();
        int age = person.getAge();
        String country = person.getCountry();
        
        System.out.println("Name: "+name);
        System.out.println("Age: "+age);
        System.out.println("Country: "+country);
    }
}
