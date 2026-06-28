
import java.util.Arrays;
class Main {
    public static void main(String[] args) {
  int[] array = {1,2,6,8,2,4};
  for(int i=0; i<array.length; i++)
  {
      int num = array.length-1;
      for(int j=i+1; j< num; j++)
      {
          if(array[i] == array[j])
          {
              array[j] = -1;
          }
      }
  }
   for(int i=0; i< array.length; i++)
   {
       if(array[i] != -1)
       {
       System.out.println(array[i]);
       }
   }
    }
}
