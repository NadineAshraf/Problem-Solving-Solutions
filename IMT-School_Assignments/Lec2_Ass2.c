#include <stdio.h>

int main()
{
   int id=1234,password=1234,id1,pass;
   char username[]="Ahmed";
   printf("Please enter your ID: ");
   scanf("%d",&id1);
   if(id == id1)
   {
       printf("Please enter your password: ");
       scanf("%d",&pass);
       if(password == pass)
       {
           printf("Username is %s",username);
       }
       else
       {
          printf("Incorrect Password");
       }
   }
   else
   {
       printf("Incorrect ID");
   }
   
   
    return 0;
}
