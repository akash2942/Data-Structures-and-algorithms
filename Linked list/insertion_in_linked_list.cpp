#include<iostream>
using namespace std;

struct node{
	int data;
	node* next;
}; node* head = NULL;

void display(node *p)
{
	node *temp = head;
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n\n";
}

void insertion_at_front(node *p, int dat)
{
	node *temp;
	temp = new node;
	temp -> data = dat;
	temp -> next = head;
	head = temp;
	
	node *temp2 = head;
	while(temp2 != NULL)
	{
		cout << temp2 -> data << " ";
		temp2 = temp2 -> next;
	}
	cout << "\n\n";
}

void insertion_at_middle(node *p, int dat, int loc)
{
	node *temp = head,*temp2,*q;
	for(int i = 1; i <=2; i++)
	{
		temp2 = temp;
		temp = temp -> next; 
	}
	
	q = new node;
	q -> data = dat;
	q -> next = temp;
	temp2 -> next = q;
	
	node *a = head;
	while(a != NULL)
	{
		cout << a -> data << " ";
		a = a -> next;
	}
	cout << "\n\n";
}

void insertion_at_end(node *p, int dat)
{
	node *temp = head,*q;
	while(temp != NULL)
	{
		q = temp;
		temp = temp -> next;
	}
	node *temp2 = new node;
	temp2 -> data = dat;
	temp2 -> next = NULL;
	q -> next = temp2;
	
	node *temp3 = head;
	while(temp3 != NULL)
	{
		cout << temp3 -> data << " ";
		temp3 = temp3 -> next;
	} 
	cout << "\n\n";
}

void insertion(node *p)
{
	node *temp,*q;
	temp = new node;
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

int main()
{
	int n;
	cout << "Enter the number of elements you want\n";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		insertion(head);
	}
	
	display(head);
	insertion_at_middle(head,15,2);
	insertion_at_front(head,3);
	insertion_at_end(head,5);
}
