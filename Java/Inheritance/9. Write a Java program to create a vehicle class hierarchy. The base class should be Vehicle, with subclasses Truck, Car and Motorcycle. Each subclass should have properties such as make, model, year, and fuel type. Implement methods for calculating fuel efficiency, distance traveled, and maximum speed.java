public abstract class Vehicle{
    private String make;
    private String model;
    private int year;
    private String fueltype;
    private double fuelEfficiency;
    
public Vehicle(String make, String model, int year, String fueltype, double fuelEfficiency )
{
    this.make = make;
    this.model = model;
    this.year = year;
    this.fueltype = fueltype;
    this.fuelEfficieny = fuelEfficieny;
}
public String getmake()
{
    return make;
}
public String getmodel()
{
    return model;
}
public int year()
{
    return year;
}
public String fueltype()
{
    return fueltype;
}
public double fuelEfficieny()
{
    return fuelEfficieny;
}
//calculating fuel efficiency, distance traveled, and maximum speed.
public abstract double calculateFuelEfficiency();
public abstract double calculateDistanceTraveled();
public abstract double getMaxSpeed();
}
public class Truck extends Vehicle
{
    private double cargoCapacity;
     public Truck(String make, String model, int year, String fuelType, double fuelEfficiency, double cargoCapacity) {
         super(make,model,year,fuelType,fuelEfficiency);
         this.cargoCapacity =cargoCapacity;
     }
     public double getcargoCapacity()
     {
         return cargoCapacity;
     }
     @Override
public  double calculateFuelEfficiency()
{
    return getFuelEfficiency() * (1.0 / (1.0 + (getCargoCapacity() / 1000.0)));
}
@Override
public double calculateDistanceTraveled()
{
   return calculateFuelEfficiency() * getFuelEfficiency();  
}
@Override
public double getMaxSpeed()
{
  return 80.0;   
}
}
// Car.java
public class Car extends Vehicle
{
    private int numSeats;
      public Car(String make, String model, int year, String fuelType, double fuelEfficiency, int numSeats)
      {
          this.numSeats = numSeats;
      }
      public int getNumSeats() 
      {
        return numSeats;
    }
     @Override
    public double calculateFuelEfficiency() {

        return getFuelEfficiency() * (1.0 / (1.0 + (getNumSeats() / 5.0)));
    }

    @Override
    public double calculateDistanceTraveled() {
        return calculateFuelEfficiency() * getFuelEfficiency();
    }

    @Override
    public double getMaxSpeed() {
        
        return 120.0;
    }
}
class Main {
    public static void main(String[] args) {
 
    }
}
