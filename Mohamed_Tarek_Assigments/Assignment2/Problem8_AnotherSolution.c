void Prime(int num1, int num2)
{
    int i,j,flag=0;
    printf("The prime numbers are:");
   for(i=num1; i<=num2;i++)
   {
      for(j=2; j<=i/2; j++)
      {
          if(i%j == 0)
          {
              flag =1;
              break;
          }
      }
      if(flag == 0)
      {
        printf("%d ",i);
      }
      else
      {
       flag=0;
      }
   }

}
int main(void)
{
   int x,y;
   printf("Please enter the first number: ");
   scanf("%d",&x);
    printf("Please enter the second number: ");
   scanf("%d",&y);
   Prime(x,y);
   
    return 0;
}
