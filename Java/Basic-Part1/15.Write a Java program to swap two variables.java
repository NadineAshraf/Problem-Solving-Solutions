import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int x,y,z=0;
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        x= input.nextInt();
        System.out.print("Enter the second number: ");
        y= input.nextInt();
        z=x;
        x=y;
        y=z;
        System.out.println("The first number: "+ x + "\nThe second number: " + y);
    }
}
