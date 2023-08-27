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

int sum_of_nodes(Node *node)
{
	if(node == NULL)
		return 0;
		
	int lsubtree = sum_of_nodes(node -> left);
	int rsubtree = sum_of_nodes(node -> right);
	
	int ans = lsubtree + rsubtree + node -> data;
	return ans;
}

int main()
{
	Node *root = newNode(1);
	root -> left = newNode(2);
	root -> right = newNode(3);
	root -> left -> left = newNode(4);
	
	int sum = sum_of_nodes(root);
	cout << sum << endl;
	
	return 0;
}
