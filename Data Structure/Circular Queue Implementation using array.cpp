#include <iostream>

using namespace std;
#define size 5
int queue[size];
int front = -1, rear = -1;
bool isEmpty()
{
    if(front == -1 && rear == -1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
bool isFull(void)
{
    if(front==0 && rear == size -1)
    {
        return true;
    }
    else if(rear == front - 1)
    {
        return true;
    }
    else
    {
        return false;
    }
}
void EnQueue(int value)
{
    if(isFull())
    {
        cout<<"Queue is full."<<endl;
    }
    else
    {
        if(isEmpty())
        {
            front = rear =0;
            queue[rear] = value;
        }
        else if(rear == size-1)
        {
            rear=0;
            queue[rear]=value;
        }
        else
        {
            //rear++;
            queue[++rear] = value;
        }
    }
}
void DeQueue(void)
{
     if(isEmpty())
     {
         cout<<"Queue is empty."<<endl;
     }
     else
     {
         if(front == rear)
         {
             front = rear = -1;
         }
         else if(front == size -1)
         {
             front=0;
         }
         else
         {
             front++;
         }
     }
}
int Peek(void)
{
    if(isEmpty())
    {
       cout<<"Queue is empty."<<endl;
       return -1;
    }
    else 
    {
       return queue[front];
    }
}
void Display(void)
{
    if(isEmpty())
    {
       cout<<"Queue is empty."<<endl;
    }
    else 
    {
       if(front<= rear)
       {
           for(int i=front; i<=rear; i++)
           {
               cout<<queue[i]<<"\t";
           }
       }
       else
       {
           for(int i=front; i< size; i++)
           {
               cout<<queue[i]<<"\t";
           }
           for(int i=0; i<=rear; i++)
           {
               cout<<queue[i]<<"\t";
           }
       }
      
    }
    cout<<endl;
}
int main()
{
 EnQueue(5);
 EnQueue(10);
 EnQueue(15);
 EnQueue(1);
 EnQueue(12);
 Display();
 EnQueue(13);
  DeQueue();
  Display();
 EnQueue(6);
 Display();
 cout<<"Peek = "<<Peek();
    return 0;
}
