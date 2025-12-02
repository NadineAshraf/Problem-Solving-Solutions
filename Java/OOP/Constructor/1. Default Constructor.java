class Cat{
    private String name;
    private int age;
    public Cat()
    {
        this.name = "Unknown";
        this.age = 0;
    }
    public String getName()
    {
        return name;
    }
    public int getAge()
    {
        return age;
    }
  
}
class Main {
    public static void main(String[] args)
    {
        Cat mycat = new Cat();
        System.out.println("Cat's Name: "+ mycat.getName());
        System.out.println("Cat's Age: "+ mycat.getAge());
    }
    }
