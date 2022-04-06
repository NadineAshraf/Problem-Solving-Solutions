#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int i,n,arr[100];
 cout<<"Enter number of elements: ";
 cin>>n;
 cout<<"Enter elements of the array: ";
 for(int i=0 ; i<n ; i++)
 cin>>arr[i];
 for(int i=0 ; i<n ; i++)
 {
     bool check=true;
     for(int j=2; j<arr[i];j++)
     {
         if(arr[i]==2)
        { 
         break;}
         else if(arr[i]%j == 0)
         {
             check=false;
             break;
         }
         
    
     }
     if(check == true)
     cout<<arr[i]<<endl;     
 }
 
    
    
 
    return 0;
}
