#include <iostream>

using namespace std;

int main()
{
    int i,n,m,x=0;
    cin>>n;
    int arr[n];
    m=n;
    for(int i=0; i<n; i++ )
    cin>>arr[i];
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n;j++)
        {
            if(arr[j]==m)
            {
                cout<<arr[j]<<" ";
                m--;
                break;
            }
            else if(j>=i)
            cout<<endl;
            
        }
    }

    return 0;
}
