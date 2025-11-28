// Online Java Compiler
// Use this editor to write, compile and run your Java code online
class TrafficLight
{
    private String color;
    private int duration;
    public TrafficLight(String color,int duration)
    {
        this.color=color;
        this.duration=duration;
    }
    public void changeColor(String newColor)
    {
        color = newColor;
    }
    public boolean isRed()
    {
        return color.equals("red");
    }
    public boolean isGreen()
    {
        return color.equals("Green");
    }
    public int getDuration()
    {
        return duration;
    }
}

class Main {
    public static void main(String[] args) {
      TrafficLight light = new TrafficLight("red", 30);
      System.out.println("The light is red: " + light.isRed());
      System.out.println("The light is green: " + light.isGreen());
      light.changeColor("green");
      System.out.println("The light is now green: "+ light.isGreen());
      System.out.println("The light duration is: "+light.getDuration());
    }
}
