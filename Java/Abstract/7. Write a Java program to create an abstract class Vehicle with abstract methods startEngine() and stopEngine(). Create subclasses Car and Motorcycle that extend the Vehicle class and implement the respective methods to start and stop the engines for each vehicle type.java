abstract class Vehicle
{
    public abstract void startEngine();
    public abstract void stopEngine();
}
//Car.java
class Car extends Vehicle
{
    @Override
    public void startEngine()
    {
        System.out.println("Car: Starting the engine...");
    }
    @Override
    public void stopEngine()
    {
        System.out.println("Car: Stopping the engine...");
    }
}
//Motorcycle.java
class Motorcycle extends Vehicle
{
    @Override
    public void startEngine()
    {
        System.out.println("Motorcycle: Starting the engine...");
    }
    @Override
    public void stopEngine()
    {
        System.out.println("Motorcycle: Stopping the engine...");
    }
}

class Main {
    public static void main(String[] args) {
       Car car = new Car();
       Motorcycle motorcycle = new Motorcycle();
       car.startEngine();
       car.stopEngine();
       motorcycle.startEngine();
       motorcycle.stopEngine();
    }
}
