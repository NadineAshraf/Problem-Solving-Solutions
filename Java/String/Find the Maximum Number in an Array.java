class Main {
    public static void main(String[] args) {
       int[] arr = {15, 8, 22, 5, 17, 30, 12};
       int max = arr[0];
       
       for(int i=1; i<arr.length;i++)
       {
           if(arr[i] > max )
           {
               max = arr[i];
             
           }
           
       }
       System.out.println("Max = " + max);
    }
}
