import java.util.Scanner;
class  Dup{
      static void Duplication(int[]arr1,int[]arr2)
{
    Scanner input = new Scanner(System.in);
    System.out.println("Please enter first array numbers: ");
    for(int i=0; i<arr1.length;i++)
    {
        arr1[i] = input.nextInt();
    }
    System.out.println("Please enter second array numbers: ");
        for(int i=0; i<arr2.length;i++)
    {
        arr2[i] = input.nextInt();
    }
    System.out.println("Please print common elements: ");
    for(int i=0; i<arr1.length;i++)
    { 
        for(int j=0;j<arr2.length;j++)
        {
            if(arr1[i] == arr2[j])
            {
               
                System.out.println(arr1[i]);
               
            
            }
            
        }
    }
  
    
}
    public static void main(String[] args) {
        System.out.println("Please enter the size of first array: ");
        Scanner size = new Scanner(System.in);
       int  s = size.nextInt();
        System.out.println("Please enter the size of second array: ");
       int z = size.nextInt();
        int[]arr1 = new int[s];
       
        int[]arr2 = new int[z];
      Duplication(arr1,arr2);
    }
}
