class Main {
    public static void main(String[] args) {
   int num=5;
   int factorial =1;
   if(num!=0)
   {
       for(int i=1; i<=num; i++)
       {
           factorial*=i;
       }
       System.out.print("Factorial = " + factorial);
   }
    }
}
