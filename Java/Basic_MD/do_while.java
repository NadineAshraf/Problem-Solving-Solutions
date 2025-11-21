import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        int grade=0, sum=0, counter=1;
        Scanner input = new Scanner(System.in);
       do
        {
            System.out.println("Enter your grade no "+ counter);
            grade = input.nextInt();
            sum+=grade;
            counter++;
        } while(counter<=6);
       
     System.out.println("Average of the 6 grades " + sum/6);
        
        
    }
}
