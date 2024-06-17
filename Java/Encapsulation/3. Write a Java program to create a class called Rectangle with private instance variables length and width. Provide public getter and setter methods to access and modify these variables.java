class Rectangle
{
    private double length;
    private double width;
    public double getLength()
    {
        return length;
    }
    public void setLength(double length)
    {
        this.length=length;
    }
    public double getWidth()
    {
        return width;
    }
    public void setWidth(double width)
    {
        this.width=width;
    }
}

public class Main
{
    public static void main(String[] args)
    {
        Rectangle rectangle = new Rectangle();
        rectangle.setLength(5.2);
        rectangle.setWidth(6.1);
        double length = rectangle.getLength();
        double width= rectangle.getWidth();
        System.out.println("Length "+length);
        System.out.println("Width "+width);
    }
}
