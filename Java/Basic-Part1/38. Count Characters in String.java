
import java.util.Scanner;
class Main {
    public static void main(String[] args) {
        Scanner input = new Scanner(System.in);
        int count1=0,count2=0,count3=0,count4=0;
        System.out.println("Enter a string");
        String x= input.nextLine();
       char[] letters = x.toCharArray();
       for(int i=0; i<letters.length;i++)
       {
           if(Character.isLetter(letters[i]))
           {
               count1++;
           }
           else if(Character.isSpaceChar(letters[i]))
           {
               count2++;
           }
           else if(Character.isDigit(letters[i]))
           {
               count3++;
           }
           else
           {
               count4++;
           }
       }
     System.out.println("letters: " + count1 +"\n" +"space: " + count2 + "\n" +"numbers: " + count3 + "\n" +"others: "+count4);   
    }
    
}
