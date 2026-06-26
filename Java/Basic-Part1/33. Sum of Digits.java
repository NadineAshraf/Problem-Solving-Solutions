
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        Long number;
        int x;
        System.out.println("Enter a number");
        number = input.nextLong();
        x = SumDigits(number);
        System.out.println("Sum of Digits = "+ x);
        
    }
    public static int SumDigits(long n)
    {
        int sum=0;
        while(n!=0)
        {
            sum+= n%10;
            n/=10;
        }
        return sum;
    }
}
