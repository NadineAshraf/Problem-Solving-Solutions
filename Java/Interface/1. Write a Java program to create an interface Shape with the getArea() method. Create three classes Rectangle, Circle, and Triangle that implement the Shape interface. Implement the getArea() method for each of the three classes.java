public interface Shape //Shape.java
{
    double getArea();
}

public class Rectangle implements Shape //Rectangle.java
{
    private double length;
    private double width;
    public Rectangle(double length, double width)
    {
        this.length = length;
        this.width = width;
    }
    @Override
    public double getArea()
    {
        return length*width;
    }
}
public class Circle implements Shape //Circle.java
{
    private double radius;
    public Circle(double radius)
    {
        this.radius= radius;
    }
    @Override
    public double getArea()
    {
        return Math.PI*radius*radius;
    }
}
public class Triangle implements Shape //Triangle.java
{
    private double base;
    private double height;
    public Triangle(double base,double height)
    {
        this.base=base;
        this.height=height;
    }
    @Override
    public double getArea()
    {
        return 0.5*base*height;
    }
}
//Main.java
public class Main{
    public static void main(String[] args)
    {
        Rectangle rectangle = new Rectangle(10,12);
        Circle circle = new Circle(3);
        Triangle triangle = new Triangle(4,6);
        // Print the area of the Rectangle
        System.out.println("Area of the Rectangle: " + rectangle.getArea());
        
        // Print the area of the Circle
        System.out.println("Area of the Circle: " + circle.getArea());
        
        // Print the area of the Triangle
        System.out.println("Area of the Triangle: " + triangle.getArea());
    }
}
