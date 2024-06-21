import java.util.Scanner;
class  Rev{
      static void Reverse(int[]arr)
{
    int temp;
    Scanner input = new Scanner(System.in);
    System.out.println("Please enter array numbers: ");
    for(int i=0; i<arr.length;i++)
    {
        arr[i] = input.nextInt();
    }
    System.out.println("Please print the array: ");
    for(int j=arr.length-1; j>=0; j--)
    {
       System.out.printf("%d ",arr[j]);
    }
 
    
}
    public static void main(String[] args) {
        int size =5;
        int[]arr2 = new int[size];
      Reverse(arr2);
    }
}
