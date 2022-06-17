#include <iostream>
#include <string>
#include <cctype>
using namespace std;

int main()
{
   string name;
   cin>>name;
   for(int i=0 ; i<name.size() ; i++)
   {
      if(isdigit(name[0]))
      {
        cout<<"Error";
        break;
      }
      else
      {
        cout<<name;
        break;
      }
    }
      return 0 ;
}
