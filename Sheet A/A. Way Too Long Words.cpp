#include <iostream>
#include <string>
#include <sstream>
using namespace std;
string int_to_str(int x) {
   stringstream ss;
   ss << x;
   return ss.str();
}
int main()
{
    int n;
    cin>>n;
    string s, arr[n];
  
    for(int i=0; i<n; i++)
   {
       cin>>s;
       
      if(s.size()<10)
      arr[i]={s};
     
    else
    {
        arr[i]=s[0]+int_to_str(s.size()-2)+s[s.size()-1];
       
    }
    }
    for(int i=0; i<n; i++)
    cout<<arr[i]<<"\n";

    return 0;
}
