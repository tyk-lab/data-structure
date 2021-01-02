#include <iostream>
#include "SmartPointer.h"

using namespace std;
using namespace StructLib;

class Test
{
public:
    Test()
    {
        cout << "Test()" << endl;
    }
    ~Test()
    {
        cout << "~Test()" << endl;
    }
};


int main()
{
    SmartPointer<Test> sp = new Test();

    return 0;
}




