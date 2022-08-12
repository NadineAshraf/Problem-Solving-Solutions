#include <iostream>

using namespace std;
class Rectangle
{
    private:
    float length;
    float width;
    public:
    void setLength(float len)
    {
        if(len>= 0)
        length = len;
        else
        cout<<"Error , please enter positive value";
    }
    float getLength ()
    {
        return length;
    }
     void setWidth(float wid)
    {
        if(wid>= 0)
       width = wid;
        else
        cout<<"Error , please enter positive value";
    }
    float getWidth ()
    {
        return width;
    }
    float getArea()
    {
        return length * width;
    }
};
int main()
{
    Rectangle box;
    box.setLength(40.5);
    box.setWidth(30.6);
    cout<<"The rectangle area is "<<box.getArea()<<"\n";
    
    return 0;
}
