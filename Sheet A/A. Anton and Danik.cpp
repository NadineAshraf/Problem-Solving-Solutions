/*
 * main.cpp
 *
 *  Created on: Mar 29, 2022
 *      Author: nadin
 */
#include <iostream>
#include <string>
using namespace std;
int main()
{
   int n, A=0 , D=0;
   string s;
   cin>>n;
  
   cin>>s;
   
     for(int i=0 ; i<n ; i++)
     {
       if(s[i] == 'A')
       {
        	A++;
       }
       else if (s[i] == 'D')
       {
	      D++;
       }

     }
if(A > D)
{
	cout<<"Anton";
}
else if(D > A)
{
	cout<<"Danik";
}
else
{
	cout<<"Friendship";
}

return 0;

}



