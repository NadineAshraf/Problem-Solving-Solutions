#include <iostream>

using namespace std;

int main()
{
   int n,i,k;
   cin>>n;
   int arr[n];
   for(i=0; i<n; i++)
   cin>>arr[i];
   for(i=0; i<n; i++)
   {   
       for(unsigned int k=n ; k==arr[i] || k!=arr[i]; k--)
       {
            if(k!=arr[i])
           cout<<"\n";
           if(k==arr[i])
           { 
               cout<<arr[i]<<" ";
               for(unsigned int z=i-1 ; z<i  ; z--)
               {
                 cout<<arr[z]<<" ";
               }
           }
           break;
          
       }
       
   
if(arr[i+1] < n)
    {
   for(int j=0; j<n; j++)
   {
       for(int k=i+1; k<j; k++)
       {
           
           if(k!=arr[i+1])
           cout<<"\n";
             for(unsigned int z=i-1 ; z<i  ; z--)
               {
                 cout<<arr[z]<<" ";
               }
           
       }
      
   }
   
    }    

}

    return 0;
}
