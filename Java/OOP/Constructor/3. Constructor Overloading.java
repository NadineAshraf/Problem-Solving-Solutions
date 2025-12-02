/******************************************************************************

                            Online Java Compiler.
                Code, Compile, Run and Debug java program online.
Write your code in this editor and press "Run" button to execute it.

*******************************************************************************/
class Book{
    public String title;
    public String author;
    public double price;
    public Book()
    {
        this.title = "Unknown";
        this.author = "Unknown";
        this.price = 0.0;
        
    }
    public Book(String title, String author)
    {
        this.title = title;
        this.author = author;
        this.price = 0.0;
    }
    public Book(String title, String author, double price)
    {
        this.title = title;
        this.author = author;
        this.price = price;
    }
}
    class Main{
    public static void main(String[] args)
    {
        Book book1 = new Book();
        System.out.println("Book1 Title: " + book1.title);
        System.out.println("Book1 Title: " + book1.author);
        System.out.println("Book1 Title: " + book1.price);
        
        Book book2 = new Book("Harry","Potter");
        System.out.println("Book2 Title: " + book2.title);
        System.out.println("Book2 Title: " + book2.author);
        System.out.println("Book2 Title: " + book2.price);
        
         Book book3 = new Book("Harry","Potter",18.99);
        System.out.println("Book3 Title: " + book3.title);
        System.out.println("Book3 Title: " + book3.author);
        System.out.println("Book3 Title: " + book3.price);
        
    }
    }
