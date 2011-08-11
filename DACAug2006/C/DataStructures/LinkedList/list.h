#ifndef LIST_H
#define LIST_H

typedef struct ListNode{
	void* data;
	struct ListNode* next;
}Node;

typedef struct{
	Node* head;
	Node* back;
}LinkedList;

typedef void (*Process)(void*);

void Initialize(LinkedList* list);
void AddNode(LinkedList* list, void* data);
void Traverse(LinkedList* list, 
				Process process);

#endif










