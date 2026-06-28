
class Main {
    public static void main(String[] args) {
  String str = "Nadine Ashraf Adeeb Naguib Ghaly";
  String [] words = str.split(" ");
  for(String word:words)
  {
      if(word.startsWith("A"))
      {
          System.out.println(word);
      }
  }

}
}
