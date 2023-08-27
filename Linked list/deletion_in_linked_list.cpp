#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}; node *head = NULL;

void display(node *p)
{
	node *temp = p;
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n\n";
}

void deletion_at_front(node *p)
{
	node *temp = p;
	head = head -> next;
	temp -> next = NULL;
	delete temp;
	
	node *temp2 = head;
	while(temp2 != NULL)
	{
		cout << temp2 -> data << " ";
		temp2 = temp2 -> next;
	}
	cout << "\n\n";
}

void deletion_at_end(node *p)
{
	node *temp  = head, *temp2;
	while(temp -> next != NULL)
	{
		temp2 = temp;
		temp = temp -> next;
	}
	temp2 -> next = NULL;
	delete temp;
	
	node *tempu = head;
	while(tempu != NULL)
	{
		cout << tempu -> data << " ";
		tempu = tempu -> next;
	}
	cout << "\n\n";
}

void deletion_in_middle(node *p,int loc)
{
	node *temp = head, *temp2;
	for(int i = 1; i < loc; i++)
	{
		temp2 = head;
		temp = temp -> next;
	}
	temp2 -> next = temp -> next;
	temp -> next = NULL;
	delete temp;
	
	node *q = head;
	while(q != NULL)
	{
		cout << q -> data << " ";
		q = q -> next;
	}
	cout << "\n\n";
}

void insertion(node *p)
{
	node *temp = new node,*q;
	temp -> next = NULL;
	
	if(head == NULL)
	{
		cin >> temp -> data;
		head = temp;
		q = temp;
	} 
	else
	{
		cin >> temp -> data;
		q -> next = temp;
		q = temp;
	}
}

int main(){
	int n;
	cout << "Enter the number of elements you want \n";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		insertion(head);
	}
	display(head);
	
	deletion_at_front(head);
	deletion_at_end(head);
	deletion_in_middle(head,2);
	
	return 0;
}

