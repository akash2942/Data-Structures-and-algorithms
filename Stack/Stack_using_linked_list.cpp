#include<iostream>
using namespace std;

struct node
{
	int data;
	node* next;
}; node* top = NULL;

void display()
{
	node *temp = top;
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n\n";
}

void pop()
{
	node *temp = top;
	top = top -> next;
	temp -> next = NULL;
	delete temp;
}

void push()
{
	node *temp;
	if(top == NULL)
	{
		temp = new node;
		cin >> temp -> data;
		temp -> next = NULL;
		top = temp;
	}
	else
	{
		temp = new node;
		cin >> temp -> data;
		temp -> next = top;
		top = temp;
	}
}

int main()
{
	int n;
	cout << "Enter how many elements you want \n\n";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		push();
	}
	display();
	
	pop();
	display();
	
	return 0;
}
