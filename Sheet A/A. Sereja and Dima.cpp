#include <iostream>

using namespace std;

int main()
{
    int number,i=0,sereja=0, Dima=0,count=1;
    cin>>number;
    int arr[number];
    int m=number;
    for(int i=0; i<number; i++)
    cin>>arr[i];
    while(count <= m)
    {
        int max=0;
        if(arr[i]>arr[number-1])
        {
            max=arr[i];
            count++;
            i++;
        }
        else
        {
            max=arr[number-1];
            count++;
            number--;
        }
      if(count%2==0)
      sereja+=max;
      else
      Dima+=max;
    }
   cout<<sereja<<" "<<Dima;
    

    return 0;
}
