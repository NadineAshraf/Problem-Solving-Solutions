#include <iostream>
#include <string>
using namespace std;

int main()
{

    string s;
    cin>>s;
    bool check=true;
    for(int i=0 ; i<s.size(); i++)
    {if(s[i]==s[s.size()-i-1])
      {
         check=true;
      }
     else
    { check=false;
     break;
    }
       
    }
    if(check == true)
    cout<<"Mirror";
    else
    cout<<"Not Mirror";
    return 0;
}
