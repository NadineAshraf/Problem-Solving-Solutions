interface Flyable //Flyable.java
{
    void fly_obj();
}

class Spacecraft implements Flyable //Spacecraft.java
{
    @Override
    public void fly_obj()
    {
        System.out.println("Spacecraft is flying");
    }
}

class Airplane implements Flyable //Airplane.java
{
    @Override
    public void fly_obj()
    {
        System.out.println("Airplane is flying");
    }
}
class Helicopter implements Flyable //Helicopter.java
{
    @Override
    public void fly_obj()
    {
        System.out.println("Helicopter is flying");
    }
}
public class Main
{
    public static void main(String[] args)
    {
        Flyable[] flyingObjects={new Spacecraft(),new Airplane(), new Helicopter()};
        for(Flyable obj:flyingObjects)
        {
            obj.fly_obj();
        }
    }
}
