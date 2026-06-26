import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a number");
       int x = input.nextInt();
       if(x%2 == 0)
       {
           System.out.print(1);
       }
       else
       {
           System.out.print(0);
       }
 
    }
    
}
