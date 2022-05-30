#include <iostream>

using namespace std;

int main()
{
   int n,count=0;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   cin>>arr[i];
   for(int j=0; j<n-1; j++)
   {
       for(int i=0; i<n; i++)
       {
           if(arr[j] <= arr[i])
           count++;
       }
       break;
   }
   cout<<count;
}
