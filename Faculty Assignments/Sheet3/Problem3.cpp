#include <iostream>
#include <cmath>
using namespace std;

int main()
{
 int i,n,arr[100],count=0;
 float sum=0;
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
     {
         arr[i];
         cout<<arr[i]<<endl;  
         count++;
          sum+=arr[i];

     }
      
      
    
 }
 cout<<"The Average = "<<sum/count;
    
    
 
    return 0;
}
