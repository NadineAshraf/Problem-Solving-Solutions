#include <iostream>

using namespace std;

int main()
{
    int n,k=0,l=0,m=0,count=1,timer=0;
    cin>>n;
    int arr[n],matrix[3][n];
    for(int i=0 ; i<n ; i++)
        cin>>arr[i];
    for(int i=0 ; i<n ; i++)
    {
        if(arr[i] == 1 )
       {
           matrix[0][k] = count;
           count++;
           k++;
       }
        if(arr[i] == 2)
       {
           matrix[0][l] = count;
           count++;
           l++;
       }
        if(arr[i] == 3 )
       {
           matrix[0][m] = count;
           count++;
           m++;
       }
        
    }
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<i; j++)
    {if(matrix[j][i]>0 )
    }
    timer++;
    }
    cout<<timer;
    

    return 0;
}
