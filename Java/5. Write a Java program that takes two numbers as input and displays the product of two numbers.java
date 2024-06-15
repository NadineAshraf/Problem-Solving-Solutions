import java.util.Scanner;
class Mul {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Input first number: ");
        int num1= input.nextInt();
        System.out.print("Input second number: ");
        int num2= input.nextInt();
        System.out.printf("%d x %d = %d",num1,num2,num1*num2);
        
        
    }
}
