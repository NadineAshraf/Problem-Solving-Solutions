public class Main
{
    static void FindIndex(int[] arr,int num)
{
    int temp;
    for(int i=0;i<arr.length;i++)
    {
        if(num == arr[i])
        {
            for(int j=i;j<=arr.length-i;j++)
            {
                temp=arr[j];
            arr[j] = arr[j+1];
            arr[j+1]=temp;
            }
        }
    }
    for(int i=0; i<arr.length-1; i++)
    {
       System.out.print(arr[i]);
    }
}
    public static void main(String[] args)
    {
        int[] arr1={1,2,3,4,5,6};
        int n=3;
       FindIndex(arr1,n);
    }
}
