//Drawable.java
interface Drawable
{
    void draw();
}
//Circle.java
import java.awt.*;
import javax.swing.*;
class Circle implements Drawable
{
    public void draw()
    {
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400,400);
        frame.setVisible(true);
        
        //Create a JPanel
        JPanel panel = new JPanel()
        {
            @Override
            protected void paintComponent(Graphics g)
            {
                super.paintComponent(g);
                g.setColor(Color.RED);
                g.fillOvel(100,100,200,200);
            }
        };
        frame.add(panel);
    }
}
//Rectangle.java
import java.awt.*;
import javax.swing.*;
class Rectangle implements Drawable 
{
    public void draw() {
     
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 400);
        frame.setVisible(true);

        JPanel panel = new JPanel() {
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);
                g.setColor(Color.BLUE);
                g.fillRect(100, 100, 200, 200);
            }
        };

     
        frame.add(panel);
    }
}
//Triangle.java


class Triangle implements Drawable {
    // Implement the "draw" method required by the Drawable interface
    public void draw() {
        // Create a new JFrame for displaying the triangle
        JFrame frame = new JFrame();
        frame.setDefaultCloseOperation(JFrame.EXIT_ON_CLOSE);
        frame.setSize(400, 400);
        frame.setVisible(true);
        JPanel panel = new JPanel() {
            @Override
            protected void paintComponent(Graphics g) {
                super.paintComponent(g);
                // Set the drawing color to green and fill a polygon
                g.setColor(Color.GREEN);
                int[] xPoints = {
                    200,
                    100,
                    300
                };
                int[] yPoints = {
                    100,
                    300,
                    300
                };
                g.fillPolygon(xPoints, yPoints, 3);
            }
        };
        frame.add(panel);
}
//Main.java
import java.awt.*;
import javax.swing.*;
class Main {
    public static void main(String[] args) {
Drawable circle = new Circle();
        Drawable rectangle = new Rectangle();
        Drawable triangle = new Triangle();

        circle.draw();
        rectangle.draw();
        triangle.draw();
  
}
}
