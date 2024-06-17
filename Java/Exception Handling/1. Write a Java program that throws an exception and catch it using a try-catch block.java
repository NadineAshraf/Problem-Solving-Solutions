public class Exception
{
    public static void main(String[] args)
    {
      try
      {
         int result = divideNumbers(5,0);
         System.out.println("Result = "+result);
      }
      catch(ArithmeticException e)
      {
          System.out.println("Error: "+e.getMessage());
      }
    }
    public static int divideNumbers(int dividend,int divisor)
    {
        if(divisor == 0)
        {
            throw new ArithmeticException("can't divide by zero");
        }
        return dividend/divisor;
    }
}
