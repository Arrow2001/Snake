#include <iostream>
using namespace std;

int main()
{
	// First used when I started. Basic.
#pragma region Basic
	//cout << "Hello world";
	//cout << " Some other text";
	//system("pause");
	//return 0;
#pragma endregion

	
	
	// Work with variables etc.
	double a;
	double b, c;
	a = 0;
	b = 0;
	cout << " Enter a: ";
	cin >> a;
	cout << " Enter b: ";
	cin >> b;
	c = a + b;
	cout << " Value of varibale c is " << c << endl;
	system("pause");
	return 0;


}