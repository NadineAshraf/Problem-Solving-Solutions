#include <iostream>
using namespace std;

int main()
{
    int n;
    cout<<"Please enter the number of cars: ";
    cin>>n;
    for(int i=0; i<n; i++)
    {
        if(n>5)
        {
            cout<<"Overflow";
            break;
        }
    }

    return 0;
}
