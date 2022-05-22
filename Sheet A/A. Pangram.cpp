#include <iostream>

using namespace std;

int
main ()
{
  int n, i, count;
  string s, lower;
  cin >> n >> s;
  for (int j = 0; j < s.size (); j++)
    {

      for (int i = 0; i < s.size (); i++)
	{
	  if (int (s[i]) > 40 && int (s[i]) < 91)
	    {
	      s[i] = int (s[i]) + 32;


	    }
	  else
	    {

	    }

	}
      break;
    }

  for (int i = 0; i < s.size (); i++)
    {

      if (int (s[i]) > 96 && int (s[i]) < 123)
	{
	    for(int i=0;i<s.size();i++)
      {
          for(int j=0; j<s.size()-1; j++)
      {
          if(int(s[i])==int(s[j+1]))
	      s.size()=s.size()-1;
          
      }
      
	}
    }
    
    }
  if (s.size() == 26)
    cout << "YES";
  else
    cout << "NO";
  return 0;
}
