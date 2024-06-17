import java.util.Scanner;
import java.io.File;
import java.io.FileNotFoundException;

public class File_Read
{
    public static void main(String[] args)
    {
      try
      {
        readFile("test.txt");
        
      }
      catch(FileNotFoundException e)
      {
        System.out.println("Error: "+e.getMessage());
      }
    }
    public static void readFile(String fileName) throws FileNotFoundException
    {
        File file = new File(fileName);
        Scanner scanner = new Scanner(file);
        //Read the content of the file
        while(scanner.hasNextLine())
        {
            String line = scanner.nextLine();
            System.out.println(line);
        }
        scanner.close();
    }

}
