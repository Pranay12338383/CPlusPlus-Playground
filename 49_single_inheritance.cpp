#include <iostream>

using namespace std;

class Base
{
    int data1; // private by default and is not inheritable
public:
    int data2;
    void setData();
    int getData1();
    int getData2();
};

void Base :: setData()
{
    data1 = 50; // can be accessed from the class itself or its children classes.
    data2 = 34;
}

int Base ::getData1()
{
    return (data1);
}

int Base ::getData2()
{
    return (data2);
}



//-----------------------------------------------
class derived : private Base // class is being derived publically ]
{
      int data3;
      public:
         void process();
         void display();
         
};

void derived ::process()
{
      setData();       // write this to when you use private visibility mode 
    data3 = data2 * getData1();//You can not directly access data 1
}

void derived ::display()
{  

    cout << "Value of data 1 is " << getData1() << endl;//since data1 is private so tum use data1() ese inherit nhi karna hai 
    cout << "Value of data 2 is " << data2 << endl;
    cout << "Value of data 3 is " << data3 << endl;
}

int main()
{
     
derived der;    // Yaha hume derived class ka object banana hai 
der.setData();
der.process();
der.display();

    return 0;
}