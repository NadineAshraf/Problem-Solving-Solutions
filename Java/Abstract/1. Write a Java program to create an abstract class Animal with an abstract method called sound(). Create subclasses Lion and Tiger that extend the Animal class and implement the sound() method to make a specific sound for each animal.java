abstract class Animal //Animal.java
{
    public abstract void sound();
}

class Lion extends Animal //Lion.java
{
    @Override
    public void sound()
    {
        System.out.println("Lion roars!");
    }
}
class Tiger extends Animal //Tiger.java
{
    @Override
    public void sound()
    {
        System.out.println("Tiger growls!");
    }
}
//Main.java
public class Main{
    public static void main(String[] args)
    {
 Animal lion = new Lion();
 lion.sound();
 Animal tiger = new Tiger();
 tiger.sound();
    }

}
