public class Circle
{
    private double radius;
    public Circle(double r)
    {
        radius =r;
    }
    public void setRadius(double r)
    {
        radius = r;
    }
    public double getRadius()
    {
        return radius;
    }
    public double getArea()
    {
        return Math.PI*radius*radius;
    }
    public double getPerimeter()
    {
        return 2*Math.PI*radius;
    }

public static void main(String[] args) {
 Circle c = new Circle(4);

    System.out.println("The area of the circle is " + c.getArea());
    System.out.println("The perimeter of the circle is " + c.getPerimeter());

    c.setRadius(3);

    System.out.println("\nThe area of the circle is now " + c.getArea());
    System.out.println("The perimeter of the circle is now " + c.getPerimeter());
        
      
        

    }
}
