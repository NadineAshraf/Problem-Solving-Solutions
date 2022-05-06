#include <iostream>
#include <string>
using namespace std;

int main()
{
    int n;
    bool check=true;
    cin>>n;
    string s, arr[n];
    for(int i=0; i<n; i++)
   {
       cin>>s;
      if(s.size()<10)
     // check=true;
       cout<<s;
    else
    {
        //check=false;
       cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
        
    }
    }

    return 0;
}
