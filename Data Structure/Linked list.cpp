#include <iostream>

using namespace std;
struct node{
    int data;
    node* next;
};
node* head = NULL;
void insertNode(int value)
{
    node *new_node, *last;
    new_node = new node;
    new_node -> data = value;
    if(head == NULL)
    {
        head = new_node;
        new_node -> next = NULL;
    }
    else
    {
        last = head;
        while(last->next != NULL)
        {
            last = last->next;
        }
        last->next = new_node;
        new_node->next = NULL;
    }
}
void Display(void)
{
    node *current_node;
    if(head == NULL)
    {
        cout<<"Linked list is empty.";
    }
    else
    {
        current_node = head;
    while(current_node != NULL)
    {
        cout<<current_node->data<<"\t";
        current_node = current_node -> next;
    }
    
    }
    cout<<endl;
}
void DeleteNode(int value)
{
    node *current,*previous;
    current = head;
    current = head;
    if(current-> data == value)
    {
        head = current-> next;
        free(current);
        return;
    }
    while(current->data != value)
    {
        previous = current;
        current = current->next;
    }
    previous -> next = current ->next;
    free(current);
}
void InsertBeginning(int value)
{
    node *new_node;
    new_node = new node;
    new_node -> data = value;
    new_node -> next = head;
    head = new_node;
}
void DeleteBeginning(void)
{
    node *first_node;
    
    if(head == NULL)
    {
        cout<<"Linked list is empty.";
    }
    else
    {
        first_node = head;
       head = first_node -> next;
       delete(first_node);
    }
}
void DeleteLast(void)
{
    node *last_node, *previous;
    
    if(head == NULL)
    {
        cout<<"Linked list is empty.";
    }
    else if(head -> next == NULL)
    {
       
       delete(head);
       head = NULL;
    }
    else
    {
        last_node = head;
        previous = head;
        while(last_node->next != NULL)
        {
            previous = last_node;
            last_node = last_node -> next;
        }
        previous -> next = NULL;
    free(last_node);
    }
}
int main()
{
    insertNode(5);
    insertNode(10);
    insertNode(15);
    insertNode(7);
    Display();
    DeleteNode(15);
    Display();
    InsertBeginning(6);
    Display();
    DeleteBeginning();
    Display();
     DeleteLast();
     Display();
    return 0;
}
