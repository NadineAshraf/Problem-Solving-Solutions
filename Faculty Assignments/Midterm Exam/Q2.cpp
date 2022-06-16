#include <iostream>
#include <cstdlib>
using namespace std;

int main()
{
    char x,y;
    while(x !='Q')
    {
          x = rand()%(10+10+1)-10;
          y = rand()%(10+10+1)-10;
          if(x>=-10 && x<=10)
         {
           cout<<"The first number is : "<<x<<"\n";
           cout<<"The second numberis : "<<y<<"\n";
           cout<<"Summation is : "<<x+y<<"\n";
         }
         else 
         break;
    }

