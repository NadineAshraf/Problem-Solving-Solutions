import java.util.Scanner;
class Rectangle {
    public static void main(String[] args) {
      Scanner input = new Scanner(System.in);
      System.out.print("Please enter width:");
      float width = input.nextFloat();
       System.out.print("Please enter height:");
      float height = input.nextFloat();
      System.out.printf("Area is %f * %f = %.2f\n",width,height,width*height);
      System.out.printf("Perimeter is 2 * (%f + %f) = %.2f",width,height,2*(width+height));
        
      
        
        
    }
}
