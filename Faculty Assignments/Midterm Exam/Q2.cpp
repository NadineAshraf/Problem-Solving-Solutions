#include <iostream>
#include <cctype>
using namespace std;

int main()
{
    while(1)
    {
    int x,y;
    cout<<"Please enter the two numbers: ";
    cin>>x>>y;
    if(x>=-10 && x<=10 && y>=-10 && y<=10)
    {
        cout<<"The number x is : "<<x<<"\n";
        cout<<"The number y is : "<<y<<"\n";
        cout<<"Summation is : "<<x+y<<"\n";
    }
    else if(isalpha(x) || isalpha(y))
   { 
       break;
   }
    }
