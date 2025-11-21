import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int length,width,area;
        System.out.print("Enter rectangle length: ");
        length = input.nextInt();
        System.out.print("Enter rectangle width: ");
        width = input.nextInt();
        area = length * width;
        System.out.println(area);
        
    }
}
