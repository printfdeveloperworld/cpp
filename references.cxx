#include<iostream>
using namespace std;

class sample
{

    public:
    int a;
     sample()
     {
         cout << "sample object created"<<endl;
     }
     sample(const sample& a)
     {
        cout << "copy constructor: sample  object created"<<endl;

     }
};

void ChanageSampleObject(sample& s)
{
    s.a =10;
}


  int main()
  {

      int  a=10;

      int *p = &a;

      cout << p<<endl;
      cout << &a<<endl;

      *p = 20;

      cout <<a<<endl;


      int & aref = a;

      aref = 30;

      cout << a<<endl;



      


      sample obj;
      obj.a=20;
      ChanageSampleObject(obj);

      cout << obj.a<<endl;
     


      return 0;
  }