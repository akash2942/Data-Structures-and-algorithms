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

int height(Node *node)
{
	if(node == NULL)
		return 0;
		
	int lsubtree = height(node -> left);
	int rsubtree = height(node -> right);
	
	int ans = max(lsubtree,rsubtree) + 1;
	return ans;
}

int diameter(Node *node)
{
	if(node == NULL)
		return 0;
		
	int lheight = height(node -> left);
	int rheight = height(node -> right);
	int both = lheight + rheight;
	int left_side = diameter(node -> left);
	int right_side = diameter(node -> right);
	
	int ans = max(both,max(left_side,right_side));
	return ans;
}

int main()
{
	Node *root = newNode(1);
	root -> left = newNode(2);
	root -> left -> left = newNode(4);
	root -> left -> right = newNode(6);
	root -> left -> right -> right = newNode(7);
	root -> right = newNode(3);
	
	int ans = diameter(root);
	cout << ans << endl;
	
	return 0;
}
