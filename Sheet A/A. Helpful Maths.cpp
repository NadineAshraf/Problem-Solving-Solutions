#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    int temp;
    cin>>s;
     
    for(int j=0 ; j<s.size(); j++)
   {
       for(int i=0 ; i<j; i+=2)
     { 
    if(s[i]>s[i+2] )
    {
     
        temp=s[i];
        s[i]=s[i+2];
        s[i+2]=temp;
       
    }
 
     }
   }
   if(s.size() == 1)
      cout<<s;
   else
      cout<<s;
    return 0;
}
