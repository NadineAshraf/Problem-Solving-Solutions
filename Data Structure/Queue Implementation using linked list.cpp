#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;
};
node* front = NULL;
node* rear = NULL;

void EnQueue(int value)
{
    node* new_node = new node;
    new_node -> data = value;
    new_node -> next = NULL;
    if(front == NULL)
    {
        front = rear = new_node;
    }
    else
    {
        rear -> next = new_node;
        rear = new_node;
    }
}
void DeQueue(void)
{
    if(front == NULL )
    {
        cout<<"Queue is empty."<<endl;
    }
    else if(front == rear)
    {
        node* ptr = front;
        front = rear = NULL;
        delete(ptr);
    }
    else
    {
        node* ptr = front;
        front = front -> next;
        delete(ptr);
    }
    
}
int Peek(void)
{
    if(front == NULL)
    {
        cout<<"Queue is empty."<<endl;
        return -1;
    }
    else
    {
        return front->data;
    }
}
void Display(void)
{
    node *current = front;
    if(front == NULL)
    {
        cout<<"Queue is empty."<<endl;
     
    }
    else
    {
        while(current != NULL)
        {
            cout<<current->data<<"\t";
            current = current -> next;
        }
        cout<<endl;
    }
}
int main()
{
 EnQueue(5);
 EnQueue(10);
 EnQueue(15);
 EnQueue(1);
 EnQueue(12);
 Display();
  DeQueue();
  Display();
 
 cout<<"Peek = "<<Peek();
    return 0;
}
