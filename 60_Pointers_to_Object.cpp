#include <iostream>

using namespace std;

class Complex
{
    int real, imaginary;

public:
    void get_data()
    {
        cout << "The real part is " << real << endl;
        cout << "The imaginary part is " << imaginary << endl;
    }

    void set_data(int a, int b)
    {
        real = a;
        imaginary = b;
    }
};

int main()
{
    // Complex c1;
    // Complex *ptr = &c1;
    Complex *ptr = new Complex; // This is anothe way to create object

    // (*ptr).set_data(3, -54);   is exactly same as
    ptr->set_data(3, -54);

    //(*ptr).get_data();      is exactly same as
    ptr->get_data();



    //  Arrays of Object 
    Complex *ptr1 = new Complex[3];
    ptr1->set_data(3, -54);
    ptr1->get_data();

    return 0;
}