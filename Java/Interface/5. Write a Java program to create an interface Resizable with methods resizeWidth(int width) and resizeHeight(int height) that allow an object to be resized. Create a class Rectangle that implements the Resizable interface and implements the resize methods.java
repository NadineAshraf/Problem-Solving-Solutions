//Resizable.java
interface Resizable
{
    void resizeWidth(int width);
    void resizeHeight(int height);
}
class Rectangle implements Resizable
{
    private float width;
    private float height;
    public void resizeWidth(int width)
    {
        this.width = width;
    }
    public void resizeHeight(int height)
    {
        this.height = height;
    }
    public void printSize()
    {
        System.out.println("Width: "+width+", Height: "+height);
    }
    
}
class Main {
    public static void main(String[] args) {
   Rectangle rectangle = new Rectangle();
   rectangle.printSize();
   rectangle.resizeWidth(150);
    rectangle.resizeHeight(100);
       rectangle.printSize();
    }
}
