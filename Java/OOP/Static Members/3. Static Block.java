class Initializer{
    static int initialValue;
    static 
    {
        initialValue = 1000;
        System.out.println("Static block: initialValue initialized to " +initialValue);
    }


}
    class Main{
    public static void main(String[] args)
    {
       System.out.println("Before creating an instance: initialValue = "+ Initializer.initialValue);
       Initializer initializer = new Initializer();
       System.out.println("After creating an instance = " + Initializer.initialValue);
        
    }
}
