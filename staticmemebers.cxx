#include<iostream>
#include <unistd.h>
using namespace std;
class rectangle_nostatic
{
  int length;
  int breadth;
  const int sides=4;

  public:
rectangle_nostatic(int length,int breadth)
    {
            this->breadth= breadth;
            this->length = length;
            
    }

      
};
 class rectangle
 {
    int length;
    int breadth;
    


    public:
   
   const static int sides=4;
    static int rectangleCount;
    rectangle(int length,int breadth)
    {
            this->breadth= breadth;
            this->length = length;
            rectangleCount++;
    }

    public:

    int calculateArea()
    { 
        return length *breadth;
    } 


 };

 int rectangle::rectangleCount=0;

 int main()
 {
    
    int sizeOfRectangles=0;
    int sizeOfRectanglesNoStatic=0;
    for(int i=0;i<100000;i++)
    {
        rectangle rec(10,20);
        rectangle_nostatic rec1(20,30);
          sizeOfRectangles += sizeof(rec);
       sizeOfRectanglesNoStatic += sizeof(rec1);
    }

    cout << " total size of rectangle objects:"<<sizeOfRectangles<<endl;
    cout << " total size of  rectangle_nostatic objects:"<<sizeOfRectanglesNoStatic<<endl;

    
     return 0;
 }

 
