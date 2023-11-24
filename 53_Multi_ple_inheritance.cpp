#include <iostream>

using namespace std;

// Syntax for inheriting in  Multi_ple Inheritance
//  class Derived : visibility-mode Base1 , visibility-mode Base2  {
//         Class body of class 'Derived'
//  };

// Base 1 class
class base1
{
protected:
    int base1int;

public:
    void set_base1int(int a)
    {
        base1int = a;
    }
};



// Base 2  class
class base2
{
protected:
    int base2int;

public:
    void set_base2int(int a)
    {
        base2int = a;
    }
};




// Base 3  class
class base3
{
protected:
    int base3int;

public:
    void set_base3int(int a)
    {
        base3int = a;
    }
};



// Derived Class 
class derived : public base2 , public base1 , public base3{
            public:
            void show(){
                cout<<"The value of base1 is " <<base1int<<endl;
                cout<<"The value of base2 is " <<base2int<<endl;
                cout<<"The value of base3 is " <<base3int<<endl;
                cout<<"The Sum of base1 , base2  and  base3 is " <<base1int+base2int+base3int<<endl;
            }
};


/*
The inherited derived class will look something like this :
base1int --> Protected 
base2int --> Protected 

Member fumction:
  set_base1int --> Public
  set_base2int --> Public
  show         --> Public

*/

int main()
{
derived pranay;
pranay.set_base1int(373);
pranay.set_base2int(315);
pranay.set_base3int(315);
pranay.show();
    return 0;
}