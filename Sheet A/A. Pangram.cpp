#include <iostream>
#include <string>
using namespace std;

int
main ()
{
  int n, i, count;
  string s, lower;
  char letter ='a';
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

 if (n>=26) {
   for (int i = 0 ; i<26 ; i ++ ) {
        if (s.find(letter) != -1) {
        letter ++;
        }
    else {
           cout << "NO";
           return 0;
         }
   }

   cout << "YES";
 }
 else {
    cout << "NO";
 }

 return 0;
