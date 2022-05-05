#include <iostream>
#include <string>
using namespace std;

int main()
{
   int NoOfFriends,HeightOfFence,count=0;
   cin>> NoOfFriends >> HeightOfFence;
   int HeightOfEachFriend[NoOfFriends];
   for(int i=0 ; i<NoOfFriends; i++)
   cin>>HeightOfEachFriend[i];
   for(int i=0 ; i<NoOfFriends; i++)
  { 
     if(HeightOfEachFriend[i]<=HeightOfFence)
     count++;
    else
    count+=2;
  }
  cout<<count;
   
   
    return 0;
}
