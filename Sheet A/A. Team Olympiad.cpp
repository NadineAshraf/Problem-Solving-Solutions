#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int n,members,arr[4][4],count[4]= {0},NoOfTeams;
    cin>>n;
    for(int i=1 ; i<=n ; i++)
      {  cin>>members;
      count[members]++;
      arr[members][count[members]]=i;
      }
NoOfTeams = min(min(count[1],count[2]),count[3]);
cout<<NoOfTeams<<"\n";
for(int i=1; i<=NoOfTeams; i++)
    cout<<arr[1][i]<<" "<< arr[2][i]<<" "<<arr[3][i]<<"\n";
    return 0;
}
