#include<iostream>
#include<queue>
#include<vector>
using namespace std;

struct Node
{
	int data;
	Node *left, *right;
};

Node *new_node(int data)
{
	Node *temp = new Node;
	temp -> data = data;
	temp -> left = NULL;
	temp -> right = NULL;
	
	return temp;
}

void printLevelorder(Node *root)
{
	// Base case
	if(root == NULL)
	{
		return;
	}
	
	queue<Node *> q;
	
	q.push(root);
	
	while(q.empty() == false)
	{
		Node *node = q.front();
		cout << node -> data << " ";
		q.pop();
		
		if(node -> left != NULL)
			q.push(node -> left);
			
		if(node -> right != NULL)
			q.push(node -> right);
	}
}


int main()
{
	Node *root = new_node(1);
	root -> left = new_node(2);
	root -> right = new_node(3);
	root -> left -> left = new_node(4);
	root -> left -> right = new_node(5);
	root -> right -> left = new_node(6);
	root -> right -> right = new_node(7);
	
	printLevelorder(root); 
}


