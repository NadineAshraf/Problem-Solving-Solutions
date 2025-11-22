import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter size of array: ");
        int size;
        size = input.nextInt();
        double[] salaries = new double[size];
        for(int i=0; i<salaries.length; i++)
        {
            System.out.println("Enter the salary of employee: " + (i+1));
            salaries[i]= input.nextDouble();
        }
        for(int i=0; i<salaries.length; i++)
        {
            sum+=salaries[i];
        }
        System.out.println("The sum of salaries is " + sum);
        System.out.println("The sum of salaries is " + sum/salaries.length);
    }
   
}
