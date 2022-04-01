#include <iostream>
using namespace std;


int main()
{
    int n, s ,t=0 , u=0;
    cin >>n;

    for (int i=0; i<n ; i++){
        cin >>s;
        if  (s>0) t+=s;
        else if (s<0 && t==0) u++;
        else if (s<0 && t!=0) t--;
    }

    cout <<u;

	return 0;

}
