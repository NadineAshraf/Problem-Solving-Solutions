#include <iostream>
#include <string>
using namespace std;

int main()
{
    int y,w,max;
    cin>>y>>w;
    string die_roll[6] = {"1/6","1/3","1/2","2/3","5/6","1/1"};
    if(y>w)
    max=y;
    else 
    max=w;
    cout<<die_roll[6-max];
    

    return 0;
}
