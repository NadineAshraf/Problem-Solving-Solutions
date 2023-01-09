#include <iostream>

using namespace std;
#define size 5
int queue[size];
int front = -1, rear = -1;
void EnQueue(int value)
{
    
    if(rear != size -1)
    {
        if(front == -1 && rear == -1)
        {
             rear++;
             front++;
            queue[rear] = value;
        }
        else
        {
            rear++;
            queue[rear] = value;
        }
       
    }
    else
    {
        cout<<"Queue is full."<<endl;
    }
}
void DeQueue(void)
{
    if(front != -1 && rear != -1 && front <= rear)
    {
        front++;
    }
    else 
    {
        cout<<"Queue is empty."<<endl;
    }
}
int Peek(void)
{
    if(front != -1 && rear != -1 && front <= rear)
    {
       return queue[front];
    }
    else 
    {
        cout<<"Queue is empty."<<endl;
        return -1;
    }
}
void Display(void)
{
    if(front != -1 && rear != -1 && front <= rear)
    {
        for(int i=front; i<=rear; i++)
        {
            cout<<queue[i]<<"\t";
        }
        cout<<endl;
    }
    else 
    {
        cout<<"Queue is empty."<<endl;
      
    }
}
int main()
{
 EnQueue(5);
 EnQueue(10);
 EnQueue(15);
 Display();
 DeQueue();
 Display();
 cout<<"Peek = "<<Peek();
    return 0;
}
