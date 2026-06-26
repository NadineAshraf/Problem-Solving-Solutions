import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Enter a string");
       char[] letters = input.nextLine().toCharArray();
       System.out.println("Reverse string");
       for(int i= letters.length -1; i>=0;i--)
       {
           System.out.print(letters[i]);
       }
     System.out.print("\n");   
    }
    
}
