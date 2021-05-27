#include<iostream>
#include <unistd.h>
using namespace std;
 class rectangle
 {
    int length;
    int breadth;

    public:
   
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


 };

 int main()
 {
    rectangle rec(10,20);

      cout<<rec.calculateArea()<<endl;
     return 0;
 }
