public class Shape //Shape.java
{
    public double getArea()
    {
        return 0.0;
    }
}
public class Rectangle extends Shape //Rectangle.java
{
    private double length;
    private double width;
    public Rectangle(double length,double width)
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
    public class Main{   // Main.java
 public static void main(String[] args) {
Rectangle rectangle = new Rectangle(3.0,10.0);
 double area = rectangle.getArea();
 System.out.println("The area of the rectangle is: "+area);
  }
    }
