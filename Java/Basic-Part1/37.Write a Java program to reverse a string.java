import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.print("Enter the string: ");
        char[] letters = input.nextLine().toCharArray();
        System.out.print("Reverse string: ");
        for(int i=letters.length-1; i>=0; i--)
        {
            System.out.print(letters[i]);
        }
    }
}
