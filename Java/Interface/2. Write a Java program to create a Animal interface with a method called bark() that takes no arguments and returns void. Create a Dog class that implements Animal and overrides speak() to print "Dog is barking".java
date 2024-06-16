public interface Animal //Animal.java
{
    void bark();
}

public class Dog implements Shape //Dog.java
{
    @Override
    public void bark()
    {
        System.out.println("Dog is barking!");
    }
}

//Main.java
public class Main{
    public static void main(String[] args)
    {
        Dog dog = new Dog();
        dog.bark();
    }
}
