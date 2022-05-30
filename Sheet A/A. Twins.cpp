#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	 int n, sum1=0, count=0,sum2=0;
	 cin>>n;
	 
	 
	 int arr[n];
	 
	 for(int i=0;i<n;i++){
		 cin>>arr[i];
		 sum1+=arr[i];
	 }
	 
	 sum1 =sum1/2;
	 sort(arr,arr+n);
	 for(int i=n-1;i>=0;i--){
		 sum2+=arr[i];
		 count++;
		if(sum2>sum1){
		 	break;
		}


	 }

	 cout<<count;
}
