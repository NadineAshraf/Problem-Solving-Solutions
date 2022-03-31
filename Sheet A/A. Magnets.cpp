include <iostream>
using namespace std;


int main()
{

  int n , arr[100000],counter=1;
  cin>>n;
  for(int i=0 ; i<n ; i++)
	  cin>>arr[i];
  for (int i=0 ; i<n-1 ; i++)
     {
	     if(arr[i] != arr[i+1])
		     counter++;
     }
	  cout<<counter;

	 return 0;
}
