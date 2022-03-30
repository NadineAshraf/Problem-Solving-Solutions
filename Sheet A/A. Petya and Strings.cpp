#include <iostream>
#include <algorithm>
using namespace std;


int main()
{
	string s1,s2;
	cin>>s1>>s2;
	   for(int i=0 ; i<s1.size(); i++)
	   {
		    if(s1[i]<91)
			   s1[i]+=32;
		    if(s2[i]<91)
			   s2[i]+=32;
	    }
	if(s1<s2)
		cout<<-1;
	else if(s2<s1)
		cout<<1;
	else
		cout<<0;
return 0;
}
