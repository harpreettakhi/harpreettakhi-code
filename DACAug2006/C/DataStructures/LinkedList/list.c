#include "list.h"

void Initialize(LinkedList* list)
{
	list->head = list->back = 0;
}

void AddNode(LinkedList* list, void* data)
{
	Node* newnode = (Node*) malloc(sizeof(Node));
	newnode->data = data;
	newnode->next = 0;
	
	if(list->head == 0)
		list->head = list->back = newnode;
	else
	{
		list->back->next = newnode;
		list->back = newnode;
	}
}

void Traverse(LinkedList* list, 
			Process process)
{
	Node* temp = list->head;
	for(; temp; temp = temp->next)
		process(temp->data);
}














