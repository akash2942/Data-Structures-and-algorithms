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
		
	if(node -> data < key)
	{
		node -> left = insert(node -> left,key);
	}
	else
	{
		node -> right = insert(node -> right,key);
	}
	
	return node; // returning the root
}

void inOrder(Node *root)
{
	if(root == NULL)
		return;
		
	inOrder(root -> left);
	cout << root -> data << " ";
	inOrder(root -> right);
}

bool search(Node *node,int key)
{
	if(node == NULL)
		return false;
		
	if(node -> data == key)
	{
		return true;
	}
	
	if(node -> data < key)
	{
		search(node -> left,key);
	}
	else
	{
		search(node -> right,key);
	}
}

int main()
{
	Node *root = NULL;
	root = insert(root,5);
	insert(root,3);
	insert(root,10);
	insert(root,1);
	insert(root,4);
	insert(root,9);
	insert(root,15);
	
	inOrder(root);
	
	bool ans = search(root,2);
	cout << "\n" << ans;
	return 0;
}
