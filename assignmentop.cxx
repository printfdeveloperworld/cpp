#include<iostream>
using namespace std;

class assignment
{

     int *a;


     public:
	
	assignment(int a)
	{
		this->a = new int ;
		*this->a = a;
	}

	assignment(const assignment &from)
	{

		cout << "copy constructor invoked"<<endl;
		this->a = new int;
		*this->a =*from.a;
	}

        void showA()
	{
		cout <<*this->a<<endl;
	}

	void changeA(int a)
	{
		*this->a = a;
	}

        assignment& operator=(const assignment& from)
	{
            
	     if( this != &from)
	     {

                  delete a;

              this->a = new int;
              *this->a = *from.a;


	     }


	      return *this;

	}
       




      	

};


int main()
{


   assignment obj1(1);
   assignment obj2 = obj1;

   assignment obj3(2);


   obj3 = obj1;

   obj3.showA();

   obj1.changeA(4);
   obj1.showA();
   obj3.showA();   


   obj3 = obj3;
   obj3.showA();

	return 0;
}
