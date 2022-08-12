
#include <iostream>
#include <string>
using namespace std;
class Car
{
    private:
    string maker;
    int model;
    string color;
    public:
    void setMaker(string m);
    string getMaker();
    void setModel(int m);
    int getModel();
   Car();
   ~Car();
    
};
Car::Car() //Initialization
{
    maker="Honda";
    model= 2018;
    color="White";
    
}
Car::~Car()
{
    
}
void Car::setMaker(string m)
{
    maker= m;
}
string Car::getMaker()
{
    return maker;
}
void Car::setModel(int m)
{
    model=m;
}
int Car::getModel()
{
    return model;
}
int main()
{
    Car c1;
    cout<<"This Car made by "<<c1.getMaker()<<"\n";
    cout<<"This Car model is "<<c1.getModel()<<"\n";
    return 0;
}
