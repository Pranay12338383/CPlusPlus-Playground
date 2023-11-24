
//jo object mai bana raha hu us object ko data pass karna ---> called as Constructor 

#include <iostream>

using namespace std;

class complex
{
    int a, b;

public:
    // creating a constructor
    // consturtor is a special member function with same name as of the  class .
    // It is used to initialize the object of its class.
    // It is automatically invoked whenever an object is created

    complex(void); // constructor declaration

    void printNumber()
    {
        cout << "Your number is " << a << " + " << b << "i" << endl;
    }
};

complex :: complex(void)//---> This is default constructor bcz it takes no parameter
{
    a = 0; 
    b = 0;

}

int main()
{
        complex c;
        c.printNumber();
    return 0;
}