#include <iostream>

using namespace std;
#define size 5
int stack[size],top = -1;
void Push(int value)
{
    if(top == size-1)
    {
        cout<<"Stack Overflow"<<endl;
    }
    else
    {
        top++;
        stack[top]=value;
    }
}
int Pop(void)
{
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
    
        return stack[top--];
    }
}
int Peek(void)
{
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
    
        return stack[top];
    }
}
void Display(void)
{
    if(top == -1)
    {
        cout<<"Stack Underflow"<<endl;
    }
    else
    {
        
       for(int i=top; i>=0; i--)
       {
           cout<<stack[i]<<"\n";
       }
      
    }
}
int main()
{
    Push(5);
    Push(6);
    Push(7);
    Display();
    return 0;
}
