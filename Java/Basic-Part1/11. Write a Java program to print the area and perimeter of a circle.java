import java.util.Scanner;
class Circle {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.print("Radius = ");
      float radius = input.nextFloat();
      System.out.println("Perimeter is = "+ 2*Math.PI*radius);
      System.out.println("Area is = "+ Math.PI*radius*radius);
        
      
        
        
    }
}
