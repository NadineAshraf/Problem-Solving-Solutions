class Animal
{
    public void move()
    {
    System.out.println("Animal moves");
    }
}
class Cheetah extends Animal
{
    @Override
    public void move()
    {
       System.out.println("This Cheetah is running!");
    }
}
class Main {
    public static void main(String[] args) {
       
        Animal animal = new Animal();
        animal.move();
        Cheetah cheetah = new Cheetah();
        cheetah.move();
    }
}
