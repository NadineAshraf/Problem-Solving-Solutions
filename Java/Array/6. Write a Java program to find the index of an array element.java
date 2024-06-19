public class Main
{
    static void FindIndex(int[] arr,int num)
{
    for(int i=0;i<arr.length;i++)
    {
        if(num == arr[i])
        {
            System.out.println("Index is "+i);
        }
    }
}
    public static void main(String[] args)
    {
       // FindIndex ind = new FindIndex();
        int[] arr1={1,2,3,4,5,6};
        int n=3;
       FindIndex(arr1,n);
    }
}
