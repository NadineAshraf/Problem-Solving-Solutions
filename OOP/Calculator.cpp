
#include <iostream>
#include <string>
using namespace std;
class Calculator
{
    public:
   int Add(int num1, int num2);   // Overloading all of them is called Add
   int Add(int num1, int num2, int num3);
   float Add(float num1, float num2);
   string Add(string a, string b);
   Calculator();
   ~Calculator();
    
};
Calculator::Calculator() //Initialization
{
    
}
Calculator::~Calculator()
{
    cout<<"Exit"<<"\n";
}
int Calculator::Add(int num1, int num2)
{
    return num1 + num2;
}
int Calculator::Add(int num1, int num2, int num3)
{
    return num1 + num2 + num3;
}
float Calculator::Add(float num1, float num2)
{
    return num1+num2;
}
string Calculator::Add(string a, string b)
{
    return a + " "+ b;
}
int main()
{
  Calculator c1;
  c1.Add(3,7);
    cout<<"This is version 1 "<<c1.Add(3,7)<<"\n";
    cout<<"This is version 2 "<<c1.Add(3,7,10)<<"\n";
    cout<<"This is version 3 "<<c1.Add("Hello","World")<<"\n";
    return 0;
}
