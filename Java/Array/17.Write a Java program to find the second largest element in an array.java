import java.util.Arrays;
class Main {
    static void second_large(int[] my_array)
    {
        int largest=0, second_largest=0;
        
        for(int i=0; i<my_array.length; i++)
        {
            if(i+1 < my_array.length)
            {
                if(my_array[i]<my_array[i+1])
                {
                
                    largest =my_array[i+1];
                    second_largest = my_array[i];
                    
                }
            
            }
    
        }
        System.out.print("Second largest number in array: " + second_largest);
       
    }
    public static void main(String[] args) {
        second_large(new int[]{1,2,3,4,2,3,5,6,7});
        
       
    }
}
