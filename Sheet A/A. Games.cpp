#include <iostream>
using namespace std;

int main()
{
    int TeamsNumber,count;
    cin>>TeamsNumber;
    int n1[TeamsNumber],n2[TeamsNumber];
    for(int i=0 ; i<TeamsNumber; i++)
    cin>>n1[i]>>n2[i];
    for(int j=0; j<TeamsNumber; j++)
    {
      for(int i=0; i<TeamsNumber; i++)
       {
           if(n1[j] == n2[i])
           count++;
       }
    }
    cout<<count;
    return 0;
}
