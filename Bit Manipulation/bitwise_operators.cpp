#include<iostream>
using namespace std;

int main()
{
	int a , b;
	cin >> a >> b;
	
	// Bitwise operators &(bitwise and) , | (bitwise or), ^ (bitwise xor), ~(bitwise not)
	
	/*cout << a & b; cout << endl;
	cout << a | b; cout << endl;
	cout << a ^ b; cout << endl;
	cout << !a << endl;
	cout << !b << endl; // some problem related to overloading
	*/
	
	int c = a & b, d = a | b, e = a ^ b;
	cout << c << endl << d << endl << e << endl;
	cout << !a << endl;
	
	// shift operators <<(left shift) , >>(right shift)
	int f = 5 << 2; // a = b << c -> a = b * 2^c , here = 5 * 2^2 i.e. 20;
	int g = 5 >> 2; // 5 / 2^2 i.e. 1
	
	cout << f << endl << g << endl;
	
	return 0;
}
