#include<iostream>
using namespace std;

int main()
{
	/* Character arrays
	char c[100];
	char c[] = {'a','b','c'}; // size of this character array is going to be 3 bytes
	char c[10] = {'a','b','c'}; // other are going to be garbage i.e. 7 elements
	char c[10] = {'a','b','c','\0'}; // end by null character which auto happens in strings
	*/
	
	int b[] = {'1','2','3'};
	cout << b << endl; // giving address as b is a pointer
	
	char a[10] = {'a','b','c'};
	cout << a << endl;
	
	// Input
/*	char s[10];
	cin >> s;
	cout << s; */
	
	char s1[] = {'h','e','l','l','o'};
	char s2[] = "hello";
	
	cout << s1 << " " << sizeof(s1) << endl; // 5 -> not terminated by \0 or null
	cout << s2 << " " << sizeof(s2) << endl; // 6 -> terminated with null
	
	return 0;
}
