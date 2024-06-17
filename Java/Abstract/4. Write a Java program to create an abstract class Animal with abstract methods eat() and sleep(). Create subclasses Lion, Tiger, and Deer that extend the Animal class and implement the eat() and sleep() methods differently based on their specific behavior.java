abstract class Animal
{
public abstract void eat();
public abstract void sleep();
}

//Lion.java
class Lion extends Animal
{
    @Override
    public void eat()
    {
        System.out.println("Lion eats meat.");
    }
    @Override
    public void sleep()
    {
        System.out.println("Lion sleeps on grassland.");
    }
}
//Tiger.java
class Tiger extends Animal
{
    @Override
    public void eat()
    {
        System.out.println("Tiger eats meat.");
    }
    @Override
    public void sleep()
    {
        System.out.println("Tiger sleeps in a hidden spot.");
    }
}
class Deer extends Animal {
    @Override
    public void eat() {
        System.out.println("Deer grazes on grass and leaves.");
    }

    @Override
    public void sleep() {
        System.out.println("Deer sleeps in open fields.");
    }
}
public class Main
{
    public static void main(String[] args)
    {
        Lion lion = new Lion();
        lion.eat();
        lion.sleep();
        System.out.println();
        Tiger tiger = new Tiger();
        tiger.eat();
        tiger.sleep();
        System.out.println();
        Deer deer = new Deer();
        deer.eat();
        deer.sleep();
    }
}
