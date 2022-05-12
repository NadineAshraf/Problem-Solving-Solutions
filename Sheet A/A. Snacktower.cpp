#include <iostream>

using namespace std;

int main()
{
   int n,i;
   cin>>n;
   int arr[n];
   for(i=0; i<n; i++)
   cin>>arr[i];
   for(i=0; i<n; i++)
   {   
       if(arr[i-1]<n && n == arr[i])
          {cout<<arr[i]<<" "<<arr[i-1];
            break;
          }
       else if(n == arr[i])
           { cout<<n<<endl;
           break;
           }
       
   }
if(arr[i+1] < n)
    {
   for(int j=0; j<n; j++)
   {
       for(int k=i+1; k<j; k++)
       {
           
           if(arr[k]<n)
            cout<<"\n";
           cout<<arr[k+1]<<" "<<arr[k];
           
       }
   }
   
       

}
    return 0;
}
