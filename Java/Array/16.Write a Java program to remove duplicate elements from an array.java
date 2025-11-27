import java.util.Arrays;
class Main {
    static void unique_array(int[] my_array)
    {
        System.out.print("Original array: ");
        for(int i=0; i<my_array.length; i++)
        {
            System.out.print(my_array[i]);
        }
        int no_unique_elements = my_array.length;
        for(int i=0; i<no_unique_elements;i++)
        {
            for(int j=i+1; j<no_unique_elements; j++)
            {
                if(my_array[i] == my_array[j])
                {
                    my_array[j] = my_array[no_unique_elements-1];
                    no_unique_elements--;
                    j--;
                }
            }
        }
        int array1[] = Arrays.copyOf(my_array,no_unique_elements);
        System.out.println("\nArray with unique values: ");
        for(int i=0; i<array1.length;i++)
        {
            System.out.print(array1[i]);
        }
    }
    public static void main(String[] args) {
        unique_array(new int[]{1,2,3,4,2,3,5});
        
       
    }
}
