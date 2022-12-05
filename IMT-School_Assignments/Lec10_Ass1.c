#include<stdio.h>
#include<stdlib.h>
#include"STD_TYPES.h"


typedef struct Node
{
	u16 data ;
	struct Node * next ;
}Node;


Node * HeadNode = NULL ;

void LinkedList_voidInsertAtTail(u16 Copy_u8UserData);
void LinkedList_voidTraverse(void);
void LinkedList_voidRemove(u16 Copy_u8UserData);


void main(void)
{
	while(1)
	{
		u16 choice ;
		u16 num;
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
				printf("Enter number you want to add: ");
				scanf("%d" , &num);
				LinkedList_voidInsertAtTail(num);                   break;
			case 1:   LinkedList_voidTraverse();                    break;
			case 2:   
				printf("Enter number you want to delete: ");
				scanf("%d" , &num);
				LinkedList_voidRemove(num);                          break;
			case 3:   exit(0);                                       break;
			default:  printf("Incorrect Entry");                     break;
		}
	}
}


void LinkedList_voidInsertAtTail(u16 Copy_u8UserData)
{
	Node * NewNode = (volatile Node *)malloc(sizeof(Node));
	NewNode -> data = Copy_u8UserData ;
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






void LinkedList_voidRemove(u16 Copy_u8UserData)
{
	Node * CurrentNode = HeadNode ;
	Node * PreviousNode = HeadNode ;

	while((CurrentNode->data != Copy_u8UserData)&&(CurrentNode->next != NULL))
	{
		PreviousNode = CurrentNode ;
		CurrentNode = CurrentNode -> next ;
		
	}
	if(CurrentNode->data == Copy_u8UserData)
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