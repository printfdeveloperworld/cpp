#include<iostream>
#include <unistd.h>
using namespace std;

class sample
{

    public:

    int *a;
    sample()
    {
        a = new int[100];
        cout<<"object created"<<endl;
    }
    ~sample()
    {
        delete [] a;

      cout<<"object destoryed"<<endl;
    }
};

int main()
{

    sample obj;

    return 0;
}