import java.util.Scanner;
class Main {
    public static void main(String[] args) {
       Scanner reader = new Scanner(System.in);
       double sum = 0.0;
       double value;
       boolean flag = true;
       while (flag == true)
       {
           System.out.println("Enter the next positive number: ");
           value = reader.nextDouble();
           if (value<0)
           {
               flag = false;
           }
           else
           {
               sum+=value;
           }
       }
       System.out.println("Sum = " + sum);
        
        
    }
}
