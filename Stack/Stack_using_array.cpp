#include<iostream>
using namespace std;

int a[100]; // const size cannot change
int top = -1;

void push()
{
	if(top == -1)
	{
		top = top + 1;
		cin >> a[top];
	}
	else
	{
		top = top + 1;
		cin >> a[top];
	}
}

void pop()
{
	top = top - 1;
}

void display()
{
	int i = top;
	for(;i >= 0; i--)
	{
		cout << a[i] << " ";
	}
	cout << "\n\n";
}

int main()
{
	int n;
	cout << "Enter how many elements you want\n";
	cin >> n;
	
	for(int i = 0; i < n; i++)
	{
		push();
	}
	display();
	pop();
	display();
}
