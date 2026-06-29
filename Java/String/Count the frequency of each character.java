
import java.util.HashMap;
class Main {
    public static void main(String[] args) {
      String str = "banana";
      HashMap<Character,Integer> map = new HashMap<>();
      for(char c: str.toCharArray())
      {
          if(map.containsKey(c))
          {
              map.put(c,map.get(c)+1);
          }
          else
          {
              map.put(c,1);
          }
      }
      for(char key: map.keySet())
      {
          System.out.println(key + " : "+map.get(key));
      }
     
}}
