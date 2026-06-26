//Animal.java
class Animal
{
    public void Sound()
    {
        System.out.println("Animal's sound");
    }
}
//Bird.java
class Bird extends Animal
{
    @Override
    public void Sound()
    {
        System.out.println("Bird's sound");
    }
}
//Cat.java
class Cat extends Animal
{
    @Override
    public void Sound()
    {
        System.out.println("Cat's sound");
    }
}
class Main {
    public static void main(String[] args) {
   Animal animal = new Animal();
   Bird bird = new Bird();
   Cat cat = new Cat();
   animal.Sound();
   bird.Sound();
   cat.Sound();
    }
}
