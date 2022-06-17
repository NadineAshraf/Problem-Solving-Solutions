#include <iostream>
#include <cmath>
using namespace std;

int main()
{
  double  x=0 , sum=0;
  int n , arr[1000];
  cout<<"Enter the number of elements ";
  cin>>n;
  for(int i=0 ; i<n ; i++)
  cin>>arr[i];
  for(int i=0 ; i<n ; i++)
  {
      x=pow(arr[i],5);
      cout<<x<<endl;
      sum+=x;
  }
  cout<<"Total Average = "<<sum/n;
 
  
  
 
    return 0;
}
