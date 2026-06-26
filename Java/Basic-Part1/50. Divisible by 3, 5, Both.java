
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        System.out.println("Numbers divisable by 3");
     for(int i=1; i<=100; i++)
     {
         if(i%3 == 0)
         {
             System.out.print(i + ",");
         }
      
     }
     System.out.println("\nNumbers divisable by 5");
     for(int i=1; i<=100; i++)
     {
        if((i%5 == 0))
         {
             System.out.print(i + ",");
         }
     }
     System.out.println("\nNumbers divisable by 3 and 5");
     for(int i=1; i<=100; i++)
     {
           if((i%3 == 0) && (i%5 == 0))
         {
             System.out.print(i + ",");
         }
     }
 
    }
    
}
