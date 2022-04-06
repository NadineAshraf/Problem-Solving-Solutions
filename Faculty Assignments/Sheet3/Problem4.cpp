#include <iostream>
using namespace std;

int main()
{
 int n,factorial=1;
 cin>>n;
 for(int i=n ; i>0 ; i--)
  { 
     factorial*=i;
  }
 cout<<factorial<<" ";
    
    
 
    return 0;
}
