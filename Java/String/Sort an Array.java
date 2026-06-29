// Online Java Compiler
// Use this editor to write, compile and run your Java code online

class Main {
    public static void main(String[] args) {
       int[] arr = {15, 8, 22, 5, 17, 30, 12};
      for(int i=0; i<arr.length; i++)
      {
          for(int j=i+1; j<arr.length;j++)
          {
              if(arr[j]<arr[i])
              {
                  int temp;
                  temp = arr[i];
                  arr[i] = arr[j];
                  arr[j] = temp;
              }
          }
      }
      for(int i=0; i<arr.length; i++)
      {
          System.out.print(arr[i] + " ");
      }
    }
}
