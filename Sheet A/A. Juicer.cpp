#include <iostream>
using namespace std;

int main()
{
  int NoOfOranges,ContainerOfJuice,ContainerOfWastes=0,WastesCapacity,count=0;
  cin>>NoOfOranges>>ContainerOfJuice>>WastesCapacity;
  int SizeOfOranges[NoOfOranges];
  for(int i=0; i<NoOfOranges; i++)
  cin>>SizeOfOranges[i];
  for(int i=0; i<NoOfOranges; i++)
  {
      if(SizeOfOranges[i] <= ContainerOfJuice && SizeOfOranges[i] <= WastesCapacity)
      {
              
                 ContainerOfWastes+=SizeOfOranges[i];
                  if(ContainerOfWastes>WastesCapacity)
                  {
                      
                      ContainerOfWastes=0;
                            count++;
                        
                          
                  }
              
                       
    }
              
              
            
              
       
  }
      cout<<count;

    return 0;
}
