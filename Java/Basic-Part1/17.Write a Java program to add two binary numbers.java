import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        long bin1,bin2;
        int i=0, rem=0;
        int[] sum = new int[20];
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the first number: ");
        bin1= input.nextLong();
        System.out.print("Enter the second number: ");
        bin2= input.nextLong();
        while(bin1!=0 || bin2!=0)
        {
            sum[i++] = (int) ((bin1%10 + bin2%10 + rem)%2);
            rem = (int) ((bin1%10 + bin2%10 + rem)/2);
            bin1/=10;
            bin2/=10;
        }
        if(rem!=0)
        {
            sum[i++] = rem;
        }
        i--;
        System.out.print("Sum of two binary numbers: ");
        while(i>=0)
        {
            System.out.print(sum[i--]);
        }
    }
}
