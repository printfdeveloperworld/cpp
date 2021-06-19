#include<iostream>
using namespace std;

int main()
{

	int a=10;
	int *aptr = &a;

	cout << &a<<endl;
	cout << aptr<<endl;

	cout << a<<endl;
	cout << *aptr<<endl;

	++a;
	cout << a<<endl;
	cout << *aptr<<endl;

	++(*aptr);
	cout <<a <<endl;
	cout << *aptr<<endl;
	cout << aptr<<endl;
	return 0;
}
