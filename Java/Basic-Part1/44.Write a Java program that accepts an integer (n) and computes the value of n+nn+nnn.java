import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int x,i,term=0;
        x = input.nextInt();
        for(i=1; i<4; i++)
        {
        term = term * 10 + x; 
        System.out.print(term + "+ ");
        }
        
    }
}
