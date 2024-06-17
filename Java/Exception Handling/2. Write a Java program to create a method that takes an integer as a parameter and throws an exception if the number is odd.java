import java.util.Scanner;

public class Exception
{
    public static void main(String[] args)
    {
        Scanner input = new Scanner(System.in);
        System.out.println("Please enter the number: ");
       int  n=input.nextInt();
      try
      {
         CheckEvenNumber(n);
         System.out.println(n+" is even");
      }
      catch(IllegalArgumentException e)
      {
          System.out.println("Error: "+e.getMessage());
      }
    }
    public static void CheckEvenNumber(int num)
    {
        if(num%2 != 0)
        {
            throw new IllegalArgumentException(num+" is odd");
        }
        
    }
}
