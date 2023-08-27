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

Node *deleteinBST(Node *root,int data)
{
	if(root == NULL)
	{
		return NULL;
	}
	
	else if(root -> data > data)
	{
		root -> left = deleteinBST(root -> left,data);
		return root;
	}
	
	else if(root -> data == data)
	{
		// Node with 0 children
		if(root -> left == NULL && root -> right == NULL)
		{
			delete root;
			return NULL;
		}
		
		// Node with 1 children
		if(root -> left != NULL && root -> right == NULL)
		{
			Node *temp = root -> left;
			delete root;
			return temp;
		}
		if(root -> right != NULL && root -> left == NULL)
		{
			Node *temp = root -> right;
			delete root;
			return temp;
		}
		
		// Node with 2 childrens
		Node *replace = root -> right;
		while(replace -> left != NULL)
		{
			replace = replace -> left;
		}
		root -> data = replace -> data;
		root -> right = deleteinBST(root -> right, replace -> data);
		return root;
	}
	
	else
	{
		root -> right = deleteinBST(root -> right,data);
		return root;
	}
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
	cout << "\n";
	
	root = deleteinBST(root,50);
	inOrder(root);
	
	return 0;
}
