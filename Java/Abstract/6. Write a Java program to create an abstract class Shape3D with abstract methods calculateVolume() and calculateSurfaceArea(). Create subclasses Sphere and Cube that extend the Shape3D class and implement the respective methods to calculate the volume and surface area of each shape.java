//Shape3D.java
abstract class Shape3D
{
    public abstract double calculateVolume();
    public abstract double calculateSurfaceArea();
}
//Sphere.java
class Sphere extends Shape3D
{
    private double radius;
    public Sphere (double radius)
    {
        this.radius = radius;
    }
    @Override
    public double calculateVolume()
    {
        return (4.0/3.0)*Math.PI*Math.pow(radius,3);
    }
    @Override
    public double calculateSurfaceArea()
    {
        return 4*Math.PI*Math.pow(radius,2);
    }
}
//Cube.java
class Cube extends Shape3D
{
    private double sideLength;
    public Cube(double sideLength)
    {
        this.sideLength = sideLength;
        
    }
     @Override
    public double calculateVolume()
    {
        return Math.pow(sideLength, 3);
    }
    @Override
    public double calculateSurfaceArea()
    {
        return 6*Math.pow(sideLength,2);
    }
}

class Main {
    public static void main(String[] args) {
     Shape3D sphere = new Sphere(7.0);
     Shape3D cube = new Cube(6.0);
     System.out.println("Sphere Volume: "+ sphere.calculateVolume());
     System.out.println("Sphere Surface Area: "+ sphere.calculateSurfaceArea());
     System.out.println("Cube Volume: "+ cube.calculateVolume());
      System.out.println("Cube Surface Area: "+ cube.calculateSurfaceArea());
 
    }
}
