#include <iostream>
#include <string>
using namespace std;

int main()
{
    int count=0,timer[26] = {0};
    string s;
    getline(cin,s);
   for(int i=0; i<s.size(); i++)
   {
       
       if( s[i]>='a' && s[i]<='z')
       {
           timer[int(s[i])-97]++;
       }
       
   }
   for(int i=0; i<s.size(); i++)
   {
       if(timer[i]>0)
       count++;
   }
   cout<<count;
   

    return 0;
}
