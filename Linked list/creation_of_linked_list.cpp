#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
}; node *head = NULL; // initially null as there are no elements in the list

void display(node *z)
{
	node *p = head;
	while(p != NULL)
	{
		cout << p -> data << " " << p -> next << endl;
		p = p -> next;
	}
}

void insertion(node *z)
{
	node *temp,*q; // temp for creating the new node and q for linking
	temp = new node;
	temp -> next = NULL;  // for the last element always becomes null for traversing
	
	if(head == NULL)
	{
		cin >> temp -> data;
		head = temp;
		q = temp;
	}
	else
	{
		cin >> temp -> data;
		q -> next = temp; // linking of nodes
		q = temp;
	}
}

int main()
{
	int n;
	cout << "Enter how many elements you want in the list\n";
	cin >> n;
	
	// Creation of nodes
	for(int i = 0; i < n; i++)
	{
		insertion(head);
	}
	
	// Traversing the linked list
	display(head);
	
	return 0;
}
