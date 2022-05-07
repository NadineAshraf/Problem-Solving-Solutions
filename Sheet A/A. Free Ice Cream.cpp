#include <iostream>
using namespace std;
int main()
{
    int n,x;
    cin>>n>>x;
    char s;
    int d[n],count=0;
    
    for(int i=0; i<n; i++)
    { 
        cin>>s>>d[i];
        if(s == '+')
          x+=d[i];
        else if(d[i]<=x)
          x-=d[i];
        else
         count++;
       
    }
   cout<<x<<" "<<count;
     
 
    return 0;
}
