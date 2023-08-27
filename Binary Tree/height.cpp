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

int height_of_tree(Node *node)
{
	// Base case
	if(node == NULL)
		return 0;
		
	// Recursive case and calculation
	int lsubtree = height_of_tree(node -> left);
	int rsubtree = height_of_tree(node -> right);
	
	int ans = max(lsubtree,rsubtree) + 1;
	
	return ans;
}

int main()
{
	Node *root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> left -> left = newNode(4);
	root -> left -> right = newNode(5);
	root -> right -> left = newNode(6);
	root -> right -> left -> right = newNode(7);
	
	int height = height_of_tree(root);
	
	cout << height << endl;
	return 0;
}
