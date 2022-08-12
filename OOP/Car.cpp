


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
   Car(string m,int mo , string c);
   ~Car();
    
};
Car::Car(string m,int mo , string c):maker(m),model(mo),color(c) //Initialization
{
  
}
Car::~Car()
{
    cout<<"Exit"<<"\n";
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
    Car c1("Honda",2020, "White");
    cout<<"This Car made by "<<c1.getMaker()<<"\n";
    cout<<"This Car model is "<<c1.getModel()<<"\n";
    
    Car c2("BMW",2022, "Black");
    cout<<"This Car made by "<<c2.getMaker()<<"\n";
    cout<<"This Car model is "<<c2.getModel()<<"\n";
    return 0;
}
