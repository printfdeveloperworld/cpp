#include<iostream>
#include <unistd.h>
using namespace std;
 class rectangle
 {
    int length;
    int breadth;

    public:

    rectangle()
    {

    }
   
    rectangle(int length,int breadth)
    {
            this->breadth= breadth;
            this->length = length;
    }

    public:

    int calculateArea()
    { 
        return length *breadth;

    }
    
    void print()
    {
         cout << "length="<<this->length;
         cout << " breadth="<<this->breadth;
         cout <<endl;
         cout <<"Area ="<<this->calculateArea()<<endl;
    }

    
    rectangle operator+(rectangle obj)
    {
        rectangle temp;
        temp.length = this->length + obj.length;
        temp.breadth = this->breadth + obj.breadth;
        return temp;
    }

    void operator++()
    {
        ++this->length;
        ++this->breadth;
    }

    friend ostream& operator<<(ostream& out, rectangle & obj);
  
};

ostream& operator<<(ostream& out, rectangle & obj)
{
       
         out << "length="<<obj.length;
         out << " breadth="<<obj.breadth;
         out <<endl;
         out <<"Area ="<<obj.calculateArea()<<endl;

         return out;
}
 
 int main()
 {
   
   rectangle  r1(10,20);
   rectangle r2(20,30);

   rectangle r3 = r1+r2;

   r3.print();

   ++r3;
  
  r3.print();

 ++r3;

  cout<<r3;

      return 0;
 }
