#include <iostream>
#include <string>
#include <cctype>
using namespace std;


int main()
{

	string word;
	cin>>word;
	int upper=0,lower=0;
	for(int i=0 ; i<word.size() ; i++)
	{
		if(isupper(word[i]))
		{
			upper+=1;
		}
		else
		{
			lower+=1;
		}

	}
	if(lower>=upper)
	{
		for(int i=0 ; i<word.size() ; i++)
		word[i]=tolower(word[i]);
	}
	else
	{
		for(int i=0 ; i<word.size() ; i++)
		word[i]=toupper(word[i]);
	}
	cout<<word;

	 return 0;
}
