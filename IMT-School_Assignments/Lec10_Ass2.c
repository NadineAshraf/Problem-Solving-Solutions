#include<stdio.h>
#include<stdlib.h>
#include"STD_TYPES.h"


typedef struct Node
{
	u16 data ;
	struct Node * next ;
}Node;


Node * HeadNode = NULL ;

void LinkedList_voidInsertAtTail(u16 Copy_u16UserData);
void LinkedList_voidTraverse(void);
void LinkedList_voidRemove(u16 Copy_u16UserData);
void LinkedList_voidInsertAtCertainPosiition(u16 Copy_u16UserData , u16 Copy_u16position);


void main(void)
{
	while(1)
	{
		u16 choice ;
		u16 num , pos;
		printf("********************************************\n");
		printf("To add node enter 0\n");
		printf("To print linked list enter 1\n");
		printf("To delete node enter 2\n");
		printf("To exit enter 3\n");
		printf("Your choice: ");
		scanf(" %d" , &choice);
	
		switch(choice)
		{
			case 0:   
				printf("Enter position: ");
				scanf(" %d" , &pos);
				printf("Enter number you want to add: ");
				scanf(" %d" , &num);
				
				LinkedList_voidInsertAtCertainPosiition(num , pos);
							break;
			case 1:   LinkedList_voidTraverse();                      break;
			case 2:   
				printf("Enter number you want to delete: ");
				scanf("%d" , &num);
				LinkedList_voidRemove(num);                            break;
			case 3:   exit(0);                                         break;
			default:  printf("Incorrect Entry");                       break;
		}
	}
}


void LinkedList_voidInsertAtTail(u16 Copy_u16UserData)
{
	Node * NewNode = (volatile Node *)malloc(sizeof(Node));
	NewNode -> data = Copy_u16UserData ;
	NewNode ->next = NULL ;
	if(HeadNode == NULL)
	{
		HeadNode = NewNode ;
	}
	else
	{
		Node * TempNode = HeadNode ;
		while(TempNode -> next != NULL)
		{
			TempNode = TempNode -> next ;
		}
		TempNode -> next = NewNode ;
	}
	
}






void LinkedList_voidTraverse(void)
{
	Node * CurrentNode = HeadNode ;
	while(CurrentNode != NULL)
	{
		printf("%d \n" , CurrentNode ->data);
		CurrentNode = CurrentNode -> next ;
	}
	
}






void LinkedList_voidRemove(u16 Copy_u16UserData)
{
	Node * CurrentNode = HeadNode ;
	Node * PreviousNode = HeadNode ;

	while((CurrentNode->data != Copy_u16UserData)&&(CurrentNode->next != NULL))
	{
		PreviousNode = CurrentNode ;
		CurrentNode = CurrentNode -> next ;
		
	}
	if(CurrentNode->data == Copy_u16UserData)
	{
		if(PreviousNode->next == NULL)
		{
			HeadNode = NULL ;
			free(CurrentNode);
		}
		else
		{
			PreviousNode -> next = CurrentNode -> next ;
			free(CurrentNode);
		}
	}
	else if(CurrentNode->next == NULL)
	{
		printf("Number doesn't exist");
	}
	
}






void LinkedList_voidInsertAtCertainPosiition(u16 Copy_u16UserData , u16 Copy_u16position)
{
	Node * NewNode = (volatile Node *)malloc(sizeof(Node));
	NewNode -> data = Copy_u16UserData ;
	Node * temp = HeadNode;
	u16 i =0;
	if(Copy_u16position == 0)
	{
		NewNode ->next = HeadNode ;
		HeadNode = NewNode ;
	}
	else
	{
		while((i < Copy_u16position-1) && (temp != NULL))
		{
			temp = temp->next ;
			i++;
		}
		NewNode -> next = temp -> next;
		temp -> next = NewNode ;
	}
	
	
}