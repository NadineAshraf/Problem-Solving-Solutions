#include <iostream>
using namespace std;

int main()
{
    int arr[4],count=0;
    for(int i=0 ; i<4 ; i++)
    cin>>arr[i];
    for(int i=0 ; i<4 ; i++)
    {
        if(arr[i] == arr[i+1])
        count++;
    }
    cout<<count;
    return 0;
}
