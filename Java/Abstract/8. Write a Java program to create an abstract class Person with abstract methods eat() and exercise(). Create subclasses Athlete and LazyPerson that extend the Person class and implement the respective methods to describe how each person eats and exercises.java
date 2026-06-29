//Person.java
abstract class Person{
    public abstract void eat();
    public abstract void exercise();
}
class Athlete extends Person
{
    @Override
    public void eat()
    {
        System.out.println("Athlete: Include foods full of calcium, iron, potassium, and fiber.");
    }
     @Override
     public void exercise()
     {
         System.out.println("Athlete: Training allows the body to gradually build up strength and endurance, improve skill levels and build motivation, ambition and confidence.");
     }
}
class LazyPerson extends Person
{
    @Override
    public void eat()
    {
    System.out.println("Couch Potato: Eating while watching TV also prolongs the time period that we're eating.");
    }
     @Override
     public void exercise()
     {
        System.out.println("Couch Potato: Rarely exercising or being physically active.");
     }
}
class Main {
    public static void main(String[] args) {
   Athlete athlete  = new Athlete();
   LazyPerson lazyperson = new LazyPerson();
   athlete.eat();
   athlete.exercise();
   
   lazyperson.eat();
   lazyperson.exercise();
   
    }
}
