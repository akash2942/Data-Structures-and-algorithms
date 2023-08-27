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

void printRightView(Node *node,int level,int &maxlevel)
{
	if(node == NULL)
		return;
		
	if(maxlevel < level)
	{
		cout << node -> data << " ";
		maxlevel = level;
	}
	
	printRightView(node -> right,level + 1,maxlevel);
	printRightView(node -> left,level + 1,maxlevel);
}

int main()
{
	Node *root = newNode(1);
	root -> left = newNode(4);
	root -> right = newNode(6);
	root -> left -> left = newNode(2);
	root -> right -> right = newNode(9);
	root -> left -> right = newNode(7);
	root -> left -> left -> right = newNode(11);
	root -> left -> right -> right = newNode(12);
	
	int level = 0, maxlevel = -1;
	printRightView(root,level,maxlevel);
	
	return 0;
}
