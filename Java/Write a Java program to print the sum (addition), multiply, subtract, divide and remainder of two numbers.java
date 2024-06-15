import java.util.Scanner;
class Cal {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Input first number: ");
        int num1= input.nextInt();
        System.out.print("Input second number: ");
        int num2= input.nextInt();
        System.out.printf("%d + %d = %d\n",num1,num2,num1+num2);
        System.out.printf("%d - %d = %d\n",num1,num2,num1-num2);
        System.out.printf("%d x %d = %d\n",num1,num2,num1*num2);
        System.out.printf("%d / %d = %d\n",num1,num2,num1/num2);
        System.out.printf("%d mod %d = %d\n",num1,num2,num1%num2);
        
        
    }
}
