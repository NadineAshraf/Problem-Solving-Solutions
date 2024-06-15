public class Animal  // Animal.java
{
    public void makeSound()
    {
        System.out.println("The animal makes a sound.");
    }
}
public class Cat extends Animal  // Cat.java
{
    @Override
    public void makeSound()
    {
        System.out.println("The cat quarrels.");
    }
}
    public class Main{  // Main.java
 public static void main(String[] args) {
Animal animal = new Animal();
Cat cat = new Cat();
animal.makeSound();
 cat.makeSound();
  }
    }
       
