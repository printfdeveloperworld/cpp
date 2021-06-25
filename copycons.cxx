#include<iostream>
using namespace std;

class test
{
    int *a;

	public:
       
	test(int a)
	{
		cout<<"constructor invoked"<<endl;
		this->a = new int;
		*this->a = a;
	}

	test(const test & from)
	{
		cout <<"copy constructor invoked"<<endl;
		this->a = new int;
		*this->a = *from.a;
	}
 
        void showA()
	{
		cout << *this->a<<endl;
	}


        void changeA(int a)
	{
		*this->a = a;
	}	


};

void passTestObj(test& a)
{
	cout <<"passed by reference"<<endl;
}

int main()
{
     
        test obj(2);
	obj.showA();
        test obj1 = obj;
	obj1.showA();
	obj1.changeA(3);
	obj1.showA();
	obj.showA();



	passTestObj(obj);

	return 0;
}

