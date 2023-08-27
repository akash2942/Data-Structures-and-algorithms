#include<iostream>
using namespace std;

struct node
{
	int data;
	node *next;
}; node *front = NULL, *rear = NULL;

void display()
{
	node *temp = front;
	while(temp != NULL)
	{
		cout << temp -> data << " ";
		temp = temp -> next;
	}
	cout << "\n\n";
}

void dequeue()
{
	node *temp = front;
	front = front -> next;
	temp -> next = NULL;
	delete temp;
}

void enqueue()
{
	node *temp;
	if(front == NULL)
	{
		temp = new node;
		cin >> temp -> data;
		temp -> next = NULL;
		front = temp;
		rear = temp;
	}
	else
	{
		temp = new node;
		cin >> temp -> data;
		temp -> next = NULL;
		rear -> next = temp;
		rear = temp;
	}
}

int main()
{
	int n;
	cout << "Enter how many elements you want\n";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		enqueue();
	}
	display();
	dequeue();
	display();
	
	return 0;
}
