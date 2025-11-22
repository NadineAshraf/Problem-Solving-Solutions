// Online Java Compiler
// Use this editor to write, compile and run your Java code online
import java.util.Scanner;
class Main {
    public static void main(String[] args){
        
        int [][] matrix = new int [5][3];
        fillarray(matrix);
        System.out.println("Output");
        printarray(matrix);
        System.out.println("\nThe sum");
        int total = sumarray(matrix);
        System.out.println(total);
    }
    public static void fillarray(int[][] list)
    {  
        Scanner input = new Scanner(System.in);
        for(int row=0; row<list.length;row++)
        {
            for(int col=0; col<list[0].length;col++)
            {
                System.out.println("Enter Data for Row No " + (row+1) + " And column no " + (col+1));
                list[row][col] = input.nextInt();
            }
        }
    }
    public static void printarray(int[][] list)
    {
        
        for(int row=0; row<list.length; row++)
        {
            for(int col=0; col<list[0].length; col++)
            {
                System.out.print(list[row][col]);
            }
            
        }
    
    }
    public static int sumarray(int[][] list)
    {
        int sum=0;
        for(int row=0; row<list.length; row++)
        {
            for(int col=0; col<list[0].length; col++)
            {
                sum+= list[row][col];
            }
            
        }
        return sum;
    }
   
}
