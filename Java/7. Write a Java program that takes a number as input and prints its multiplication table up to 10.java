import java.util.Scanner;
class Multiplication {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Input a number: ");
        int num= input.nextInt();
        for(int i=0; i<=10;i++)
        {
            System.out.println(num+" x "+i+" = " +num*i);
        }
      
        
        
    }
}
