#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    complex(int x, int y)//parameterized constructor 
    {
        a = x;
        b = y;
    }
    
    // You can create multiple constructor inside a class

    complex(int x)//parameterized constructor 
    {
        a = x;
        b = 0;
    }

    complex()//default constructor 
    {
        a = 0;
        b = 0;
    }

    void printNumber(void)
    {
        cout << " The number is " << a << " + " << b << " i " << endl;
    }
};

int main()
{

    complex c1(4, 6);
    c1.printNumber();

    complex c2(7);
    c2.printNumber();

    complex c3;
    c3.printNumber();

    return 0;
}