import java.util.*;
class Main {
    public static void main(String[] args) {
        String str = "w3resource";
        System.out.println("The given string is: " + str);
        System.out.println("After removing duplicates characters the new string is: " + removeDuplicateChars(str));
        
    }
    private static String removeDuplicateChars(String sourcestr)
    {
        char[] arr1 = sourcestr.toCharArray();
        String targetStr = " ";
        for(char value: arr1)
        {
            if(targetStr.indexOf(value) == -1)
            {
                targetStr+=value;
            }
        }
        return targetStr;
    }
}
