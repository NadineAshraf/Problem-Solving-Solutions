import java.util.Arrays;
class Main {
    static void second_smallest(int[] my_array)
    {
        int smallest=0, second_smallest=Integer.MAX_VALUE;
        
        for(int i=0; i<my_array.length; i++)
        {
            if(i+1 < my_array.length)
            {
                if(my_array[i]<my_array[i+1])
                {
                smallest= my_array[0];
                if(my_array[i+1]<smallest)
                {
                    smallest = my_array[i+1];
                    
                }
            
                }
            
            }
        }
            for(int j=0; j<my_array.length-1;j++)
            {
                if(my_array[j] != smallest)
                    {
                        
                        if(my_array[j] < second_smallest)
                        {
                           
                           second_smallest =  my_array[j];
                           
                        }
                       
                    }
            }
    
        
       System.out.print("Second smallest number in array: " + second_smallest);
       
    }
    public static void main(String[] args) {
        second_smallest(new int[]{1,9,4,7,3,5,6,7});
        
       
    }
}
