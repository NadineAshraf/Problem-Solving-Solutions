#include <iostream>

using namespace std;

int main()
{
   int n,count=0, sum=0,sum2=0;
   cin>>n;
   int arr[n];
   for(int i=0; i<n; i++)
   {
   cin>>arr[i];
   sum+=arr[i];
   }
   sum=sum/2;
   for(int j=0; j<n/2; j++)
   {
       for(int i=0; i<n; i++)
       {
           int temp;
           if(arr[i]> arr[i+1])
           {
          temp=arr[i];
          arr[i] = arr[i+1];
          arr[i+1] = temp;
           }
       }
      
   }

  for(int i=n-1;i>=0;i--){
		 sum2+=arr[i];
		 count++;
		if(sum2>sum){
		 	break;
		}


	 }

	 cout<<count;

}
