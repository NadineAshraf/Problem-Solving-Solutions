import java.util.Scanner;
class  MinMax{
      static void FindMinMax(int[]arr)
{
    int max = arr[0];
    int min = arr[0];
    Scanner input = new Scanner(System.in);
    System.out.println("Please enter array numbers: ");
    for(int i=0; i<arr.length;i++)
    {
        arr[i] = input.nextInt();
    }
    for(int i=0; i<arr.length; i++)
    {
        if(arr[i]>max)
        {
            max = arr[i];
        }
        else if(arr[i]<min)
        {
            min = arr[i];
        }
        else
        {
            /*Do Nothing*/
        }
    }
    System.out.println("Maximum = "+ max);
    System.out.println("Minimum = "+ min);
}
    public static void main(String[] args) {
        int[]arr2 = {0};
      FindMinMax(arr2);
    }
}
