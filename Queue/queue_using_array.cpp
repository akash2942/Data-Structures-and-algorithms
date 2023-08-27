#include<iostream>
using namespace std;

int a[10];
int front = -1,rear = -1;

void display()
{
	int i = front,j = rear;
	for(i;i <= j; i++)
	{
		cout << a[i] << " ";
	}
	cout << "\n\n";
}

void dequeue()
{
	front = front + 1;
}

void enqueue()
{
	if(front == -1)
	{
		front = front + 1;
		rear = rear + 1;
		cin >> a[rear];
	}
	else
	{
		rear = rear + 1;
		cin >> a[rear];
	}
}

int main()
{
	int n;
	cout << "Enter the no. of elements you want\n";
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
