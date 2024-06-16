abstract class Shape //Shape.java
{
    abstract double calculateArea();
    abstract double calculatePerimeter();
}

class Circle extends Animal //Circle.java
{
    private double radius;
    public Circle(double radius)
    {
        this.radius=radius;
    }
    @Override
    double calculateArea()
    {
        return Math.PI*radius*radius;
    }
    @Override
    double calculatePerimeter()
    {
        return 2*Math.PI*radius;
    }
}
class Triangle extends Shape  //Triangle.java
{
    private double side1;
    private double side2;
    private double side3;

public Triangle(double side1, double side2, double side3)
{
    this.side1=side1;
    this.side2=side2;
    this.side3=side3;
}
@Override
double calculateArea()
{
    double s = (side1+side2+side3)/2;
    return Math.sqrt(s*(s-side1)*(s-side2)*(s-side3));
}
@Override
double calculatePerimeter()
{
    return side1+side2+side3;
}
}
//Main.java
public class Main{
    public static void main(String[] args)
    {
double r=4.0;
Circle circle = new Circle(r);
double ts1=3.0,ts2=4.0,ts3=5.0;
Triangle triangle = new Triangle(ts1,ts2,ts3);
 System.out.println("Radius of the Circle"+r);
        System.out.println("Area of the Circle: " + circle.calculateArea());
        System.out.println("Perimeter of the Circle: " + circle.calculatePerimeter());
		System.out.println("\nSides of the Traiangel are: "+ts1+','+ts2+','+ts3);
        System.out.println("Area of the Triangle: " + triangle.calculateArea());
        System.out.println("Perimeter of the Triangle: " + triangle.calculatePerimeter());
    }

}
