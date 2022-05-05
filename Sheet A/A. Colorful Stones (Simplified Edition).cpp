#include <iostream>
#include <string>
using namespace std;

int main()
{
   string s,t;
   int count=0;
   cin>>s>>t;
 
       for(int i=0 ; i<s.size(); i++)
      {
         
          if(t[i]==s[count])
           { 
                
               count++;
           }
    
      }
      
    cout<<count+1;
    return 0;
}
