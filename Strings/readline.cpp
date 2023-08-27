#include<iostream>
using namespace std;

void readline(char a[], int maxLen, char delimit)  // = '\n')
{
	int i = 0;
	char ch = cin.get(); // reads only 1 and print also 1 character
	
	while(ch != delimit) //'\n')
	{
		a[i] = ch;
		i++;
		if(i == (maxLen - 1)){ // maxLen - 1 bcoz at the end insert \0
			break;
		}
		ch = cin.get();
	}
	a[i] = '\0';
	return;
}

int main()
{
	char a[1000];
	cin.getline(a, 1000, '$'); // works exactly the same way as readline
	// cin.getline(a, 1000); // default it terminates via newline
	//readline(a,1000,'$');
	cout << a << endl;
}
