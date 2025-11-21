import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        String fname="";
        float salary;
        float net_salary;
        System.out.print("Enter your first name ");
        fname = input.next();
        System.out.print("Enter your salary ");
        salary = input.nextFloat();
        net_salary = salary - (salary*0.10f);
        System.out.printf("Your net salary is %f",net_salary);
        
        
    }
}
