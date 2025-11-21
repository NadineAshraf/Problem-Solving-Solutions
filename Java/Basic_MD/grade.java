// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        char grade;
        Scanner reader = new Scanner(System.in);
        System.out.print("Enter your char ");
        grade = reader.next().charAt(0);
        switch(grade)
        {
            case 'A':
                System.out.println("Excellent");
                break;
            case 'B':
                System.out.println("Very Good");
                break;
            case 'C':
                System.out.println("Good");
                break;
            case 'D':
                System.out.println("Fair");
                break;
            case 'F':
                System.out.println("Failed");
                break;
            default:
                System.out.println("Invalid");
                break;
        }
     
        
        
    }
}
