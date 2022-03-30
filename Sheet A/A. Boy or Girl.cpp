#include <iostream>
#include <string>
#include <algorithm>
using namespace std;


int main()
{
	int count=0;
	string name;
	cin>>name;
	for(int i=1 ; i<=name.size() ; i++)
	{
      count=i;
	}
	if(count%2 == 0)
	{
		cout<<"CHAT WITH HER! ";
	}
	else
	{
		cout<<"IGNORE HIM";
	}
	 return 0;
}
