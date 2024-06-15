public class Rectangle
{
    private float width;
    private float length;
    public Rectangle(float w, float l)
    {
        width =w;
        length=l;
    }
    public void setLength(float l)
    {
        length = l;
    }
     public void setWidth(float w)
    {
       width= w;
    }
    public float getLength()
    {
        return length;
    }
    public float getWidth()
    {
        return width;
    }
    public float getArea()
    {
        return length*width;
    }
    public float getPerimeter()
    {
        return 2*(length+width);
    }

public static void main(String[] args) {
 Rectangle rectangle = new Rectangle(7, 12);

    System.out.println("The area of the rectangle is " + rectangle.getArea());
    System.out.println("The perimeter of the rectangle is " + rectangle.getPerimeter());

    rectangle.setWidth(6);
    rectangle.setLength(12);

    System.out.println("\nThe area of the rectangle is now " + rectangle.getArea());
    System.out.println("The perimeter of the rectangle is now " + rectangle.getPerimeter());
        
      
        

    }
}
