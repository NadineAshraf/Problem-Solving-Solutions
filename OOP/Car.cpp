
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
    
    
};

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
    c1.setMaker("Honda");
    c1.setModel(1028);
    cout<<"This Car made by "<<c1.getMaker()<<"\n";
    cout<<"This Car model is "<<c1.getModel()<<"\n";
    return 0;
}
