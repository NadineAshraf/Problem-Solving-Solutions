//Book.java
public class Book
{
    private String title;
    private String author;
    private double price;
    
    public String getTitle()
    {
        return title;
    }
    public void setTitle(String title)
    {
        this.title = title;
    }
    public String getAuthor()
    {
        return author;
    }
    public void setAuthor(String author)
    {
        this.author = author;
    }
    public double getPrice()
    {
        return price;
    }
    public void setPrice(double price)
    {
        this.price =price;
    }
    public void applyDiscount(double percentage)
    {
        if(percentage > 0 && percentage <=100)
        {
            this.price -= this.price*(percentage/100);
        }
    }
}
class Main {
    public static void main(String[] args) {
   Book book = new Book();
   book.setTitle("Java Programming");
   book.setAuthor("Nadine Ashraf");
   book.setPrice(150.0);
   book.applyDiscount(10);
   
   System.out.println("Title: " + book.getTitle());
   System.out.println("Author: " + book.getAuthor());
   System.out.println("Price: $" + book.getPrice());
    }
}
