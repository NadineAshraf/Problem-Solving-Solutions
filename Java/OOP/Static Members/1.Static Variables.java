class Counter{
    public static int count=0;

    public Counter()
    {
        count++;
    }
    public static int getCounter()
    {
        return count;
    }
}
    class Main{
    public static void main(String[] args)
    {
       Counter c1 = new Counter();
       Counter c2 = new Counter();
       Counter c3 = new Counter();
       
       System.out.println("Count: " + Counter.getCounter());
        
    }
}
