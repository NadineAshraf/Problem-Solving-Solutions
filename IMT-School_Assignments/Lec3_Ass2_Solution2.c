
#include <stdio.h>

int main()
{
    int ID[3] = {1234,5678,9870};
    int password[3] = {7788,5566,1122};
    char username[3][20]={"Ahmed","Amr","Wael"}; 
    int i,id,pass,flag=0,x=0;
    printf("Please Enter your ID: ");
    scanf("%d",&id);
    for(i=0; i<3; i++)
    {
          if(ID[i] == id)
          {
              printf("Please Enter Password: ");
              scanf("%d",&pass);
              if(password[i] == pass)
              {
                  printf("Welcome %s",username[i]);
              }
              else
              {
                  for(i=0; i<2; i++)
                  {
                  printf("Try again: ");
                  scanf("%d",&pass);
                  if(password[i] == pass)
                  {
                     printf("Welcome %s",username[i]);
                     flag=0;
                     break;
                  }
                  else
                  {
                      x=1;
                      
                  }
                  }
                  break;
              }
          }
          else
          {
             flag = 1;
          }
    }
    if(flag == 1)
    {
         printf("You are not registered");
    }
    else if(x == 1)
    {
        printf("Incorrect password for 3 times. No more tries");
    }
    return 0;
}
