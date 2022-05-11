#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,max,min;
    cin>>n;
    int arr[n];
    for(int i=0; i<n; i++)
    cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        if(abs(arr[i] - arr[0]) > abs(arr[i] - arr[n-1]))
        max = abs(arr[i] - arr[0]);
        else
        max = abs(arr[i] - arr[n-1]);
        if(abs(arr[i]-arr[i+1]) < abs(arr[i] - arr[i-1]))
        min = abs(arr[i]-arr[i+1]);
        else
        min = abs(arr[i] - arr[i-1]);
        cout<<min<<" "<<max<<endl;
        
    }

    return 0;
}
