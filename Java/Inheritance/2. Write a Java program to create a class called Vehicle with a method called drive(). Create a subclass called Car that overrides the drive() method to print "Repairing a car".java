public class Vehicle // Vehicle.java
{
    public void drive()
    {
        System.out.println("Repairing a vehicle");
    }
}
public class Car extends Vehicle  // Car.java
{
    @Override
    public void drive()
    {
        System.out.println("Repairing a car.");
    }
}
    public class Main{  // Main.java
 public static void main(String[] args) {
Vehicle vehicle = new Vehicle();
Car car = new Car();
vehicle.drive();
 car.drive();
  }
    }
