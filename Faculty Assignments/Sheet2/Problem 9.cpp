#include <iostream>
using namespace std;


int main()
{
    char arr[4];
	  bool check=true;
	   cout<<"Please enter your number: ";
	   for(int i=0 ;i<4 ; i++)
	   cin>>arr[i];
	   for (int i=0 ; i<4 ; i++)
	   {
	       if(isalpha(arr[i]))
	       {
	           check=false;
	       cout<<"Please enter your number again: ";


	       }

	     

	   }
	    if(check == false)
	  { check =true;
	   for (int i=0 ; i<4 ; i++)
	    cin>>arr[i];}
	   for (int i=0 ; i<4 ; i++)
	   {

	       if(isalpha(arr[i]))
	       {
	           check=false;
	           cout<<"There is a Misunderstanding";
	       }
	     
	   }
	   if(check == true)
	   cout<<"Welcome";
	return 0;

}
