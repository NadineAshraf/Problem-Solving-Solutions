#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;
};
node* top = NULL;

void Display(void)
{
    node *current_node;
    if(top == NULL)
    {
        cout<<"Stack Underflow.";
    }
    else
    {
        current_node = top;
    while(current_node != NULL)
    {
        cout<<current_node->data<<"\n";
        current_node = current_node -> next;
    }
    
    }
    cout<<endl;
}

void Push(int value)
{
    node *new_node;
    new_node = new node;
    new_node -> data = value;
    new_node -> next = top;
    top = new_node;
}
int Pop(void)
{
    node *first_node;
    int value;
    if(top == NULL)
    {
        cout<<"Stack Underflow.";
        return -1;
    }
    else
    {
        first_node = top;
       top = first_node -> next;
       value = first_node ->data;
       delete(first_node);
       return value;
    }
}
int Peek(void)
{
     if(top == NULL)
    {
        cout<<"Stack Underflow.";
        return -1;
    }
    else
    {
        return top->data;
    }
}
int main()
{
  Push(5);
  Push(10);
  Push(15);
  Display();
  Pop();
  Display();
  cout<<"Peek = "<<Peek();
    return 0;
}
