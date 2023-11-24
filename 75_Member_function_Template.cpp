#include <iostream>

using namespace std;

template <class T>
class Pranay
{
public:
    T data;
    Pranay(T a)
    {
        data = a;
    }

    void display();
};

// Member function with template
template <class T>
void Pranay<T> :: display()     // Use scope resolution operator 
{
    cout << data << endl;
}




void func(int  a)
{
    cout << "I am first func() : " << a << endl;
}


// Function Template
template <class T> // Template ki madad se hum isko exact match bana sakte hai par upar wala hi exact match hai 
void func(T a)
{
    cout << "This is templatised fun() :" << a << endl;
}

int main()
{

    // // Pranay<float> h(6.987);
    // // Pranay<int> h(6);
    // Pranay<char> h('P');
    // cout << h.data << endl;
    // h.display();

    func(4);   // Exact match takes the highest priority
    
    // exact match hoga to wo print hoga agar wo na hua to template ki madad se jo exact match banaya 
    // wo print hoga 

    return 0;
}