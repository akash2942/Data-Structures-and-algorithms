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

int count_of_nodes(Node *node)
{
	// Base case
	if(node == NULL)
		return 0;
		
	int lsubtree = count_of_nodes(node -> left);
	int rsubtree = count_of_nodes(node -> right);
	
	return lsubtree + rsubtree + 1;
}

int main()
{
	Node *root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> left -> left = newNode(4);
	root -> left -> right = newNode(5);
	root -> right -> left = newNode(6);
	root -> right -> right = newNode(7);
	
	int count = count_of_nodes(root);
	cout << count << endl;
	
	return 0; 
}
