public class Main
{
    static void AddNum(int[] arr,int num,int index)
{
    int temp;
    int[] arr2 = new int[arr.length+1];
    for(int i=0;i<arr.length;i++)
    {
        if(i == index)
        {
            
            for(int j=arr.length-i+1;j>i;j--)
            {
            arr[j] = arr[j-1];
            }
            arr[i]=num;
        }
    }
    for(int i=0; i<arr.length; i++)
    {
       System.out.print(arr[i]);
    }
   
}
    public static void main(String[] args)
    {
        int[] arr1={1,2,3,4,5,6};
        int n=7;
        int ind=2;
       AddNum(arr1,n,ind);
    }
}
