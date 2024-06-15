public class arr
{
    public static boolean contains(int[] arr, int item)
    {
        for(int n:arr)
        {
            if(item == n)
            {
                return true;
            }
        }
        return false;
    }

 public static void main(String[] args) {
int[] arr1= {
         1789, 2035, 1899, 1456, 2013, 
         1458, 2458, 1254, 1472, 2365, 
         1456, 2265, 1457, 2456
      };
      // Check if the integer array 'my_array1' contains the item 2013 and print the result.
      System.out.println(contains(arr1, 2013));
      
      // Check if the integer array 'my_array1' contains the item 2015 and print the result.
      System.out.println(contains(arr1, 2015));
  }

        
}
