#include <iostream>
using namespace std;

template<T>
void Add(T a, T b)
{
    T tmp = a;
    a = b;
    tmp = b;
}


int main()
{
    Add(3, 4);
    cout << "Hello World";
    return 0;
}
