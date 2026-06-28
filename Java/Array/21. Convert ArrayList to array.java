
import java.util.Arrays;
import java.util.ArrayList;
class Main {
    public static void main(String[] args) {
   ArrayList<String> list = new ArrayList<String>();
   list.add("Python");
   list.add("Java");
   list.add("C++");
   list.add("C");
   String[] array = new String[list.size()];
   list.toArray(array);
    }
}
