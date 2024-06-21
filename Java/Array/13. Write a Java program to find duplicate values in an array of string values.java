import java.util.Scanner;
class  Dup{
      static void Duplication(String[]arr)
{
    Scanner input = new Scanner(System.in);
    System.out.println("Please enter array numbers: ");
    for(int i=0; i<arr.length;i++)
    {
        arr[i] = input.nextLine();
    }
    System.out.println("Please print the array: ");
    for(int i=0; i<arr.length;i++)
    {
        for(int j=i+1;j<arr.length;j++)
        {
            if(arr[i].equals(arr[j]))
            {
               
                System.out.println(arr[i]);
               
            
            }
            else
            {
                
            }
            
        }
  
      
    }
   
 
    
}
    public static void main(String[] args) {
        System.out.println("Please enter the size of array: ");
        Scanner size = new Scanner(System.in);
       int  s = size.nextInt();
        String []arr2 = new String[s];
      Duplication(arr2);
    }
}
