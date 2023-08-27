#include<iostream>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node *newNode(int data)
{
	Node *temp = new Node;
	temp -> data = data;
	temp -> left = temp -> right = NULL;
}

Node *insert(Node *node, int key)
{
	if(node == NULL)
		return newNode(key);
		
	if(node -> data > key)
	{
		node -> left = insert(node -> left, key);
	}
	
	else if(node -> data < key)
	{
		node -> right = insert(node -> right, key);
	}
	
	return node;
}

void inOrder(Node *root)
{
	if(root == NULL)
		return;
		
	inOrder(root -> left);
	cout << root -> data << " ";
	inOrder(root -> right);
}

int main()
{
	Node *root = NULL;
	root = insert(root,10);
	insert(root,30);
	insert(root,9);
	insert(root,50);
	insert(root,7);
	insert(root,1);
	insert(root,24);
	
	inOrder(root);
	
	return 0;
}
