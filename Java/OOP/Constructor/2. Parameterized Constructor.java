class Dog{
    public String name;
    public String color;
    public Dog(String name, String color)
    {
        this.name = name;
        this.color = color;
    }

}
    class Main{
    public static void main(String[] args)
    {
        Dog mydog = new Dog("Lala","Black");
        System.out.println("Dog's Name: "+ mydog.name);
        System.out.println("Dog's Age: "+ mydog.color);
    }
    }
