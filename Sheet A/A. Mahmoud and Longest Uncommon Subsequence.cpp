#include <iostream>
#include <string>
using namespace std;

int main()
{

   string a,b;
   cin>>a>>b;
   for(int i=0; i<a.size(); i++)
   {
       if(int(a[i]) == int(a[i+1])-1  && int(b[i]) == int(b[i+1])-1 && b.size()> a.size())
      { cout<<b.size();
       break;
          
      }
       else if(int(a[i]) == int(a[i+1])-1  && int(b[i]) == int(b[i+1])-1 && a.size()> b.size())
      { cout<<a.size();
       break;
          
      }
      else 
       cout<<-1;
   }
    

    return 0;
}
