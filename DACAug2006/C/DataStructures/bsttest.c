#include <stdio.h>

typedef struct BinarySearchTree{
	struct BinarySearchTree* left;
	int data;
	struct BinarySearchTree* right;
}BST;

BST* root = 0;
BST* temp = 0;
BST* parent = 0;
int flag = 0;

void CreateNode(int data)
{
	BST* newnode = 0;
	
	newnode = (BST*) malloc(sizeof(BST));
	newnode->left = 0;
	newnode->data = data;
	newnode->right = 0;
	
	if(root == 0)
		root = temp = parent = newnode;
	else
	{
		temp = root;
		while(temp)
		{
			parent = temp;
			if(newnode->data < temp->data)
			{
				temp = temp->left;
				flag = 0;
			}		
			else
			{
				temp = temp->right;
				flag = 1;
			}
		}
		if(flag == 0)
			parent->left = newnode;
		else
			parent->right = newnode;
	}
}

void InOrder(BST* temp)
{
	if(temp != 0)
	{
		InOrder(temp->left);
		printf("%d\n", temp->data);
		InOrder(temp->right);
	}
}

void PostOrder(BST* temp)
{
	if(temp != 0)
	{
		PostOrder(temp->left);
		PostOrder(temp->right);
		printf("%d\n", temp->data);
	}
}
int main()
{	
	CreateNode(18);	
	CreateNode(10);	
	CreateNode(22);	
	CreateNode(7);	
	CreateNode(34);	
	CreateNode(12);
	
	printf("-- InOrder traversal\n");
	InOrder(root);
	printf("<< PostOrder traversal\n");
	PostOrder(root);
	
	return 0;	
}





























