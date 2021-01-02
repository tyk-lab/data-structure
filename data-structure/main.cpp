#include <iostream>
using namespace std;

template <typename T>
void Swap(T &num1, T &num2)
{
    T tmp = num1;
    num1 = num2;
    num2 = tmp;
}


template <typename T>
class TempClass
{
public:
   T Process(T v)
   {
       return v * v;
   }
};

int main()
{
    int a = 3;
    int b = 4;

    Swap<int>(a, b);
    cout << "a = " << a << " " << "b = " << b << endl;

    TempClass<int> tempA;

    cout << tempA.Process(4) << endl;

    return 0;
}




