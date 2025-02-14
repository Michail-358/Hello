#include <iostream>
using namespace std;

int main()
{
	int a{ 8 };
	int* a1{ &a };
	cout << a << endl;
	cout << a1 << endl;
	cout << *a1 << endl;
}