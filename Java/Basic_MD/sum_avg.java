// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter 3 numbers: ");
        int num1,num2,num3,total;
        double avg;
        num1= input.nextInt();
        num2= input.nextInt();
        num3= input.nextInt();
        total = sum(num1,num2,num3);
        avg = average(num1,num2,num3);
        display(total,avg);
    }
    public static int sum(int n1, int n2, int n3)
    {
        return n1+n2+n3;
    }
    public static double average(int n1, int n2, int n3)
    {
        return sum(n1,n2,n3)/3;
    }
    public static void display(int s, double a)
    {
        System.out.println("The sum of the 3 numbers is "+s);
        System.out.println("The average of the 3 numbers is " + a);
    }
}
